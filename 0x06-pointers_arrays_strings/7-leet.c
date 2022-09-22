#include "main.h"

/**
 * leet - encodes a string to 1337
 * @s: string to be encoded
 *
 * Return: a string
 */


char *leet(char *s)
{
	int a = 0, b, l = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		b = 0;

		while (b < l)
		{
			if (s[a] == tr[b] || s[a] - 32 == tr[b])
				s[a] = trw[b];
			b++;
		}
		a++;
	}
	return (s);
}
