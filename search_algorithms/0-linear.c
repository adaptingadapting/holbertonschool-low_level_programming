#include "search_algos.h"

/**
 * linear_search - searches in an array using the
 * linear search algorithm
 * @array: array of ints
 * @size: size of the array
 * @value: value to search for
 * Return: -1 on failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
