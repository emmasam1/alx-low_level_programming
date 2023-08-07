#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates a given string.
 * @str: The string to be duplicated.
 *
 * Return: On success, returns a pointer to the duplicated string.
 * Returns NULL if str is NULL or if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int length = 0, i = 0;

	if (str == NULL)
	return (NULL);

	while (str[length] != '\0')
	length++;

	duplicate = (char *)malloc(length + 1);
	if (duplicate == NULL)
	return (NULL);

	while (i < length)
	{
	duplicate[i] = str[i];
	i++;
	}
	duplicate[i] = '\0';

	return (duplicate);
}
