
#include "main.h"
#include <stdio.h>

/**
 *_print_rev_recursion - prints a reversed string
 *@s: string to be reversed
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
}
else
{
_print_rev_recursion(s + 1);
putchar(*s);
}
}
