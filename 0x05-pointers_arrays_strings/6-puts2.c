#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string, followed by a new line.
 * @str: Pointer to the input string.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}

	putchar('\n');
}
