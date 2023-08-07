#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a specific char.
 * @size: The size of the array.
 * @c: The char with which to initialize the array.
 *
 * Return: On success, returns a pointer to the array. On failure or if size is 0, returns NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;
	if (size == 0)
	{
		return (NULL);
	}

array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < size; ++i)
	{
		array[i] = c;
	}

		return (array);
}
