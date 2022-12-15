#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @src: sring to be completed at the end of @dest
 * @dest: string to be appended upon
 * @n: integer parameter to compare index to
 * Return: return a pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
