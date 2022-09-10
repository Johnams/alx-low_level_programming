#include <stdio.h>

/**
 * main - Entry point
 *
 * Description- Alphabet in lowercase q and e not to print
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
			putchar(i);
	}
	putchar('\n');
	return (0);
}
