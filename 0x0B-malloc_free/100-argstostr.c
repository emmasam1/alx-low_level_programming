#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: On success, returns a pointer to the concatenated string.
 * Returns NULL if ac is 0 or av is NULL, or if memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
	int i, total_length = 0, current_index = 0;
	char *concatenated;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		char *arg = av[i];
		int arg_length = 0;

		while (arg[arg_length] != '\0')
			arg_length++;

		total_length += arg_length + 1;
	}

	concatenated = (char *)malloc(total_length * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		char *arg = av[i];
		int arg_length = 0;

		while (arg[arg_length] != '\0')
		{
			concatenated[current_index] = arg[arg_length];
			current_index++;
			arg_length++;
		}

		concatenated[current_index] = '\n';
		current_index++;
	}

	concatenated[current_index] = '\0';

	return (concatenated);
}
