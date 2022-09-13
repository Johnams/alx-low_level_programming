#include "main.h"
/**
 * main - Entry point
 *
 * print_alphabet_x10 - function to prints abc 10 times
 *
 * Return: Always 0
 */
int main(void)
{
	char i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
	return (0);
}
