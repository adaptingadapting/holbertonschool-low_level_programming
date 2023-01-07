#include "search_algos.h"

/**
 * binary_search - searches value with the binary search algo
 * @array: array of ints to search in
 * @size: size of the array
 * @value: value to look for in the array
 * Return: returns the value found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t floor = 0;
	size_t half;

	size = size - 1;
	printf("Searching in the array: ");
	for (i = floor; i <= size; i++)
	{
		printf("%d", array[i]);
		if (i < size)
			printf(", ");
	}
	printf("\n");	
	while (half != size)
	{
		half = ((floor + size) / 2);
		if (array[half] == value)
			return (half);
		else if (array[half] < value)
		{
			floor = half + 1;
			if (floor <= size)
				printf("Searching in the array: ");
			for (i = floor; i <= size; i++)
			{
				printf("%d", array[i]);
				if (i < size)
					printf(", ");
			}
			printf("\n");
		}
		else
		{
			size = half - 1;
			if (floor <= size)
				printf("Searching in the array: ");
			for (i = floor; i <= size; i++)
			{
				printf("%d", array[i]);
				if (i < size)
					printf(", ");
			}
			printf("\n");
		}
	}
	return (-1);
}
