#include "main.h"
#include <stddef.h>

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area to be filled
 * @b: The constant byte used to fill the memory area
 * @n: Number of bytes to be filled
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (s == NULL || n == 0)
		return (s);

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
