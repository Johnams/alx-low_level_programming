#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Possible combination of single-digit numbers
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
	int a;

	for (a = 28; a <= 37; a++)
	{
		putchar(a);
		if (a != 37)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
