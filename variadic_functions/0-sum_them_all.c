#include "variadic_functions.h"

/**
 * sum_them_all - Returns sums of all of its parameters
 * @n: Number of parameters
 *
 * Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int j;
j = 0;
va_list vl;

if (!(n))
return (0);
va_start(vl, n);
for (i = 0; i < n; i++)
j = j + va_arg(vl, int);
va_end(vl);
return (j);
}
