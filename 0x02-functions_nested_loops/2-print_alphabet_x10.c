#include "main.h"
/**
 * main - Entry point
 *
 * print_alphabet_x10 - function to prints abc 10 times
 */
void print_alphabet_x10(void)
{
        int i, x;

        for (x = 0; x <= 9; x++)
        {
                for (i = 'a'; i <= 'z'; i++)
                {
                        _putchar(i);
                }
                _putchar('\n');
        }
}

