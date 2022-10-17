#include "main.h"
#include <stdio.h>

/**
 *_pow_recursion - elevates x to the power of y
 *@x: int variable
 *@y: int variable
 *Return: x elevated to y
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else
{
if (y > 0)
return (x * _pow_recursion(x, y - 1));
return (1);
}
}
