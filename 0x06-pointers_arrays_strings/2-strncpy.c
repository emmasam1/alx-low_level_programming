#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copies a string.
 * @dest: The destination buffer to copy the string to.
 * @src: The source string to be copied.
 * @n: The maximum number of characters to copy from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*src != '\0' && n > 0)
	{
		*dest++ = *src++;
		n--;
	}

	/* Fill the remaining characters in dest with null bytes if necessary */
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}

	return (dest_start);
}
