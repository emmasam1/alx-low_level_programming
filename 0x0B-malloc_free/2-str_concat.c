#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: On success, returns a pointer to the concatenated string.
 * Returns NULL if memory allocation fails or if s1 and s2 are both NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int length_s1 = 0, length_s2 = 0, i, j;

	if (s1 != NULL)
	{
	while (s1[length_s1] != '\0')
		length_s1++;
	}

	if (s2 != NULL)
	{
	while (s2[length_s2] != '\0')
		length_s2++;
	}

	concatenated = (char *)malloc((length_s1 + length_s2 + 1) * sizeof(char));
	if (concatenated == NULL)
	return (NULL);

	for (i = 0; i < length_s1; i++)
	concatenated[i] = s1[i];

	for (j = 0; j < length_s2; j++)
	concatenated[i + j] = s2[j];

	concatenated[i + j] = '\0';

	return (concatenated);
}
