#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string parameter
 */
void puts_half(char *str)
{
	int a, b, c;

	a = strlen(str);
	if (a % 2 == 1)
		b = a / 2 + 1;
	else
		b = a / 2;
	for (c = b; c < a; c++)
		putchar(str[c]);
	putchar('\n');
}
