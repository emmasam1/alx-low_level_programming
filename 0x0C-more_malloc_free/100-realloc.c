#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: Size of the allocated space for ptr.
 * @new_size: New size of the memory block.
 *
 * Return: A pointer to the reallocated memory block.
 * If new_size is equal to zero and ptr is not NULL, returns NULL.
 * If malloc fails, returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			((char *)new_ptr)[i] = ((char *)ptr)[i];
		}
	}
	else
	{
		for (i = 0; i < new_size; i++)
		{
			((char *)new_ptr)[i] = ((char *)ptr)[i];
		}
	}

	free(ptr);

	return (new_ptr);
}
