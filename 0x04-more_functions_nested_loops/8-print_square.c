#include "main.h"

/**
 * print_square - prints a square using #
 * @size: size of the square
 * Return: void
 */
void print_square(int size)
{
	int i = 0, c;

	if (size > 0)
	{
		while (i < size)
		{
			c = 0;

			while (c < size)
			{
				_putchar(35);
				c++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
