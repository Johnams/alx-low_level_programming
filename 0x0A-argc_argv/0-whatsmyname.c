#include <stdio.h>

/**
 * main - prints its name followed by a new line
 * @argc: argc parameter
 * @argv: an array of a command listed
 *
 * Return: always 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	prinf("%s\n", *argv[0]);

	return (0);
}
