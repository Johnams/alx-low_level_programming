#include <stdio.h>

/**
 * main - prints its name followed by a new line
 * @argc: number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: always 0
 */
int main(int _attribute_((_unused_)) argc, char *argv[])
{
	prinf("%s\n", argv[0]);

	return (0);
}
