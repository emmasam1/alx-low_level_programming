#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * leet - Encodes a string into 1337.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int len = strlen(str);
	int i;
	char *encoded = malloc((len + 1) * sizeof(char));

	if (encoded == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		encoded[i] = str[i];
		if (str[i] == 'a' || str[i] == 'A')
			encoded[i] = '4';
		else if (str[i] == 'e' || str[i] == 'E')
			encoded[i] = '3';
		else if (str[i] == 'o' || str[i] == 'O')
			encoded[i] = '0';
		else if (str[i] == 't' || str[i] == 'T')
			encoded[i] = '7';
		else if (str[i] == 'l' || str[i] == 'L')
			encoded[i] = '1';
	}

	encoded[len] = '\0';
	return (encoded);
}
