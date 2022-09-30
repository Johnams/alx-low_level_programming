#include <stdio.h>

/**
 * main - prints its name followed by a new line
 * @argc: argc parameter
 * @argv: an array of pointers to the arguments
 *
 * Return: always 0
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	prinf("%s\n", *argv);

	return (0);
}
