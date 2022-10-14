#include "main.h"
#include <stdio.h>

/**
 *_puts_recursion - prints a string
 *@s: string to be printed
 */

void _puts_recursion(char *s)
{
if (*(s))
{
printf("%c", *s);
s++;
_puts_recursion(s);
}
else
putchar(10);
}
