#include "main.h"
#include <stdio.h>

/**
 *_strlen_recursion - returns the lenght of a string
 *@s: the string in question
 *Return: returns the lenght in int
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
