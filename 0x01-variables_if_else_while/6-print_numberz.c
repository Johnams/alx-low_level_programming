#include <stdio.h>

/**
 * main - Entry point
 *
 * Description -prints single numbers of base 10 starting from 0:
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
