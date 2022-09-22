#include "main.h"
#include <string.h>

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
	int j = strcmp(s1, s2);

	printf("This function returns: %d", j);
	return (0);
}
