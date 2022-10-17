#include "main.h"
#include <stdio.h>

int primef(int a, int b);

/**
 * is_prime_number - determines if n is prime
 * @n: int variable
 * Return: returns
 */

int is_prime_number(int n)
{
return (primef(2, n));
}

/**
 * primef - finds if a number is prime
 * @a: int variable
 * @b: int variale
 * Return: returns the result
 */

int primef(int a, int b)
{
if (b <= 1)
return (0);
if (a >= b)
return (1);
else if (b % a == 0)
return (0);
else
return (primef(a + 1, b));
}
