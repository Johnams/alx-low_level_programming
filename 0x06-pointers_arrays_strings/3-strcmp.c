#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: returns 0 if s1 == s2
 * returns negative if s1 < s2
 * returns positive if s1 >s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, res = 0;

	while (1)
	{
		if (s1[i] == '\0')
			break;

		else if (s2[i] == '\0')
		{
			res = s1[i];
			break;

		}
		else if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break;

		}
		else
			i++;
	}
	return (res);
}
