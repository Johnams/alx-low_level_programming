#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Single numbers followed by a new line
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
	int i;

	for (i = 20; i < 30; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
