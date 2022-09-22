#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 *
 * Return: address of s
 */
char *cap_string(char *s)
{
	int j = 0;

	while (s[j])
	{
		while (!(s[j] >= 'a' && s[j] <= 'z'))
			j++;

		if (s[j - 1] == ' ' ||
		    s[j - 1] == '\t' ||
		    s[j - 1] == '\n' ||
		    s[j - 1] == ',' ||
		    s[j - 1] == ';' ||
		    s[j - 1] == '.' ||
		    s[j - 1] == '!' ||
		    s[j - 1] == '?' ||
		    s[j - 1] == '"' ||
		    s[j - 1] == '(' ||
		    s[j - 1] == ')' ||
		    s[j - 1] == '{' ||
		    s[j - 1] == '}' ||
		    j == 0)
			s[j] -= 32;

		j++;
	}

	return (s);
}

