#include "mnain.h"

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: string to check
 * @accept: string to check against
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				braek;
		}
		if (!accept[j])
			braek;
	}
	return (i);
}
