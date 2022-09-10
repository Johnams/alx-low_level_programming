#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - numbers of base 16 in lowercase
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
	int i;
	int j;

	for (i = 20; i < 30; i++)
	{
		putchar(i);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
