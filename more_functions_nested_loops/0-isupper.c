#include "main.h"

/**
 * _isupper - determines if input corresponds to alphabetic character
 *
 * @c: number to be evaluated
 *
 * Return: 1 if c is alphabetic character and 0 otherwise
 */

int _isupper(int c)
{
if ((c >= 65 && c <= 90))
return (1);
return (0);
}
