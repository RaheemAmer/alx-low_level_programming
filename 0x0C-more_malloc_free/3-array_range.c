#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array of range of numbers
 * @min: range start
 * @max: range end
 *
 * Return: a pointer to the array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(*arr));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i <= max - min; i++)
		arr[i] = min + i;

	return (arr);
}
