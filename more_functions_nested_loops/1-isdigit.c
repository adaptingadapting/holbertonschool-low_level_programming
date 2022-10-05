#include "main.h"

/**
 * _isdigit - determines if input corresponds to alphabetic character
 *
 * @c: number to be evaluated
 *
 * Return: 1 if c is alphabetic character and 0 otherwise
 */
int _isdigit(int c)
{
if ((c >= 48 && c <= 57))
return (1);
return (0);
}
