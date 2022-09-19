#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int j = 0, i;

	while (s[i++])

		j++;

	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
