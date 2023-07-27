#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be appended.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	/* Find the end of the destination string */
	char *dest_end = dest;
	while (*dest_end != '\0')
	{
		dest_end++;
	}

	/* Copy characters from src to dest_end, including the null terminator */
	while (*src != '\0')
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}

	/* Add the null terminator at the end */
	*dest_end = '\0';

	return (dest);
}
