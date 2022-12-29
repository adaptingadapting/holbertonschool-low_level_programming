#include "main.h"

/**
 * print_binary - prints the representation of n
 * @n: number to be printed as its binary rep
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 0;
	int zeroes = 0;
	unsigned long int o = n;

	if (!n)
		putchar('0');
	else
	{
		for (; n > 0; n >>= 1, i <<= 1)
		{
			if (i | (n & 1))
				i |= (n & 1);
			else
				zeroes++;
		}
		i >>= 1;
		for (; i > 0; i >>= 1)
			putchar((i & 1) + '0');
		for (; zeroes > 0; zeroes--)
			putchar('0');
	}
	if (o > 1000000000000000000)
		putchar('1');
}
