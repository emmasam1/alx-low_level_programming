#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints a string, followed by a new line, using recursion.
 * @s: The input string to be printed.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
/* Base case: If the current character is the null terminator,
* print a new line and return.
*/
printf("\n");
return;
}

/* Print the current character and move to the next character recursively. */
printf("%c", *s);
_puts_recursion(s + 1);
}
