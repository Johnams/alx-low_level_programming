#include "main.h"

/**
 * leet - encodes a string to 1337
 * @s: string to be encoded
 *
 * Return: pointer to the encoded string
 */


char *leet(char *s)
{
	int i = 0, j;

	char leet[5] = {'A', 'E', 'O', 'T',
		'L'};

	while (s[i])
	{
		for (j = 0; j <= 4; i++)
		{
			if (s[i] == leet[j] ||
				s[i] - 32 == leet[j]
				s[i] = j + '0';
		}
		i++;
	}
	return (s);
}
