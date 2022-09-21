#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: sring to be completed at the end of @dest
 * @dest: string to be appended upon
 * @n: integer parameter to compare index to
 * Return: return a pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
