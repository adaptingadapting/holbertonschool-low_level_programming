#include "main.h"
#include <stdio.h>
/**
 *print_rev - prints a string in reverse
 *@s: the string in question
 */

void print_rev(char *s)
{
int i;
for (i = _strlen(s); i >= 0; i--)
putchar(s[i]);
putchar(10);
}
/**
 *_strlen - finds the lenght of a string
 *@s: the string in question
 *Return: returns the lenght as an integer
 */
int _strlen(char *s)
{
int i = 0;

while (*(s + i))
i++;
return (i);
}
