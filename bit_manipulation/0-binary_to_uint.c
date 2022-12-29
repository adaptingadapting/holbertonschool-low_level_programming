#include "main.h"

/**
 * binary_to_uint - transforms b into a decimal
 * @b: binary number to transform
 * Return: returns b in decimal form
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		result = result << 1;
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			result = result | 1;
	}
	return (result);
}
