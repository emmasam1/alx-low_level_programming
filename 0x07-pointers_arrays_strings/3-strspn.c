#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The string containing the characters to be matched.
 *
 * Return: The number of bytes in the initial segment of s which consist
 *         only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int length = 0;

while (*s)
{
char *a = accept;

while (*a)
{
if (*s == *a)
{
length++;
break;
}
a++;
}
if (!*a)
{
break;
}

s++;
}

return (length);
}
