
#include "main.h"
#include <stdio.h>

/**
 *_puts - prints a characrter array to the standard output
 *@str: string accepted as parameter
*/

void _puts(char *str)
{
int i;
for (i = 0; i < _strlen(str); i++)
putchar(str[i]);
}
