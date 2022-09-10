#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Prints lowercase in reverse
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
	char i;

	for (i = 'z'; >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
