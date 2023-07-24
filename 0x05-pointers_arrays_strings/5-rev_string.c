#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the input string.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int length = 0;
	int start, end;
	char temp;

	/* Calculate the length of the string */
	while (s[length] != '\0')
		length++;

	/* Reverse the string */
	start = 0;
	end = length - 1;

	while (start < end)
	{
		/* Swap characters */
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		/* Move to the next characters */
		start++;
		end--;
	}
}
