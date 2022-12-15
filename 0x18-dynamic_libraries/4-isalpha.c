#include "main.h"

/**
 * _isalpha - checks for alphabet characters
 * @c: a charter to be checked on
 * Return: return 1 or 0 depending on the condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
