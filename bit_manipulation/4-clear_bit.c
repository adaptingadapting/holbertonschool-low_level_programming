#include "main.h"

/**
 * clear_bit - puts a 0 in the poistion index of n
 * @n: number
 * @index: position to put 0 in
 * Return: 1 on success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	*n &= ~(1 << index);
	return (1);
}
	
