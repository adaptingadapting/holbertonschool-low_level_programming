#include "main.h"

/**
 * get_bit - returns a the bit in the index
 * @n: index
 * @index: poistion to return
 * Return: returns the index posiiton in n
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index >= 64)
		return (-1);
	for (; i < index; i++)
		n >>= 1;
	return (n & 1);
}
