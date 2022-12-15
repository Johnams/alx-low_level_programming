#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: string to be printed
 * on success: return no error
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
