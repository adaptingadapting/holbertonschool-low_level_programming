#include "main.h"
#include <stdio.h>

int sqrt_(int r, int t);
/**
 * _sqrt_recursion - return the sqrt of n
 * @n: int variable
 * Return: natural srqt of n, or -1
 */

int _sqrt_recursion(int n)
{
return (sqrt_(1, n));
}

/**
 * sqrt_ - returns the square root of r
 * @a: int variable
 * @b: int variable
 * Return: suqare root
 */

int sqrt_(int a, int b)
{
if (a * a == b)
return (a);
if (a < b)
return (sqrt_(a + 1, b));
return (-1);
}
