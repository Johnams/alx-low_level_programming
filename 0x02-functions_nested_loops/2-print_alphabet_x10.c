#include "main.h"
/**
 * print_alphabet_x10 - prints the lowercase alphabets
 */

void print_alphabet_x10(void)
{
	int i, x;

	for (x = 0; x <= 9; x++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
