#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the argument
 *
 * Return: 0 if program treceives two arguments
 * 1 if it does not receive two arguments
 */
int main(int argc, char *argv[])
{
	int num1, num2, sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	sum = num1 * num2;

	printf("%d\n", sum);

	return (0);
}
