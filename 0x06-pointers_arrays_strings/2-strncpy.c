#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @src: the source string
 * @dest: stores the string copied
 * @n: max number of byte copied
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
