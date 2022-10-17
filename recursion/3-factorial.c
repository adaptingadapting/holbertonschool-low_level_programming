#include "main.h"
#include <stdio.h>

/**
 *factorial - returns the factorial of n
 *@n: the number to be input
 *Return: returns the factorial of n
 */

int factorial(int n)
{
if (n < 0)
return (-1);
else
{
if (n > 1)
return (n * factorial(n - 1));
return (1);
}
}
