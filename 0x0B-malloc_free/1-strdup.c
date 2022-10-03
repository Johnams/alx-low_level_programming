#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memeory
 * which contains a copy of the string given as a parameter
 *
 * @str: a string to be duplicated
 *
 * Return: NULL if str = NULL or insufficient memory otherwise
 * returns a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, l = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;

	duplicate = malloc(sizeof(char) * (l + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	duplicate[len] = '\0';

	return (duplicate);
}
