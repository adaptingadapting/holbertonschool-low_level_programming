
#include "main.h"
#include <stdio.h>

/**
 *_strlen - finds the lenght of the string
 *_puts - prints a characrter array to the standard output
 *@str: string accepted as parameter
*/

void _puts(char *str)
{
int i;
for (i = 0; i < _strlen(str); i++)
putchar(str[i]);
putchar(10);
}
int _strlen(char *s)
{
int i = 0;

while (*(s + i))
i++;
return (i);
}
