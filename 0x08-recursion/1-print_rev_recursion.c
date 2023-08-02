#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: The input string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
/* Base case: If the current character is the null terminator, return. */
return;
}

/* Move to the next character recursively before printing the current one. */
_print_rev_recursion(s + 1);

/* Print the current character after the recursive call (in reverse order). */
printf("%c", *s);
}
