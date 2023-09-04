#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or an error code as specified.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		buffer = malloc(20 + strlen(argv[1]));
		if (buffer == NULL)
			exit(1);

		strcpy(buffer, "Error: Can't read from ");
		strcat(buffer, argv[1]);
		write(STDERR_FILENO, buffer, strlen(buffer));
		free(buffer);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		buffer = malloc(18 + strlen(argv[2]));
		if (buffer == NULL)
			exit(1);

		strcpy(buffer, "Error: Can't write to ");
		strcat(buffer, argv[2]);
		write(STDERR_FILENO, buffer, strlen(buffer));
		close(fd_from);
		free(buffer);
		exit(99);
	}

	buffer = malloc(BUFFER_SIZE);
	if (buffer == NULL)
		exit(1);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			buffer = malloc(18 + strlen(argv[2]));
			if (buffer == NULL)
				exit(1);

			strcpy(buffer, "Error: Can't write to ");
			strcat(buffer, argv[2]);
			write(STDERR_FILENO, buffer, strlen(buffer));
			close(fd_from);
			close(fd_to);
			free(buffer);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		buffer = malloc(20 + strlen(argv[1]));
		if (buffer == NULL)
			exit(1);

		strcpy(buffer, "Error: Can't read from ");
		strcat(buffer, argv[1]);
		write(STDERR_FILENO, buffer, strlen(buffer));
		close(fd_from);
		close(fd_to);
		free(buffer);
		exit(98);
	}

	close(fd_from);
	close(fd_to);
	free(buffer);
	return (0);
}
