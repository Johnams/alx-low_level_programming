#include <stdio.h>

/**
 * main - prints all arguiment it receives
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
