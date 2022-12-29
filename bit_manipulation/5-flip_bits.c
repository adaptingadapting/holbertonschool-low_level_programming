#include "main.h"

/**
 * flip_bits - returns the number of flips
 * @n: number 1
 * @m: number 2
 * Return: number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = (n ^ m);
	unsigned int retvalue = 0;

	for (; res > 0; res >>= 1)
		retvalue += (res & 1);
	return (retvalue);
}
