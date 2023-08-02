#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Calculate the length of a string recursively.
 * @s: Pointer to the input string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
/* Base case: when we reach the null terminator, the length is 0. */
return 0;
}
else
{
/* Recursive case: increment the length and move to the next character. */
return 1 + _strlen_recursion(s + 1);
}
}
