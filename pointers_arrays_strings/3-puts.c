
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
putchar(10);
}
/**
*_strlen - finds the lenght of the string
*@s: the string in question
*Return: returns the lenght of the character
*/
int _strlen(char *s)
{
int i = 0;

while (*(s + i))
i++;
return (i);
}
