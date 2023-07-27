#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes from src to be concatenated.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;

	/* Move dest to the end of the string */
	while (*dest != '\0')
		dest++;

	/* Copy at most n bytes from src to dest */
	while (*src != '\0' && n > 0)
	{
		*dest++ = *src++;
		n--;
	}

	/* Ensure the resulting string is null-terminated */
	*dest = '\0';

	return (dest_start);
}
