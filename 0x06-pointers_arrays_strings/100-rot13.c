#include "main.h"

/**
 * rot13 - encodes a string
 * @str: string parameter
 *
 * Return: return str
 */
char *rot13(char *str)
{
	int i = 0;

	while (str[i])
	{
		while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((str[i] >= 'm' && str[i] <= 'z' || (str[i] > 'M' && str[i] <= 'Z'))
			{
				str[i] -= 13;
				break;
			}

			str[i] += 13;
			break;
		}
		i++;
	}
	return (str);
}
