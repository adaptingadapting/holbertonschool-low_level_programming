#include "main.h"

/**
 * set_bit - sets a bit in the index pos
 * @n: index
 * @index: position to set to 1
 * Return: 1 on success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;
	unsigned int aux = 1;

	for (; i < index; i++)
	{
		aux <<= 1;
	}
	*n = (aux | *n);
	return (1);
}
