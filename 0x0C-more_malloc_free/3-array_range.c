#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: int type
 * @max: int type
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int count;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (min <= max)
	{
		ptr[count] = min;
		min++;
		count++;
	}
	return (ptr);
}
