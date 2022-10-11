#include "main.h"
#include <stdio.h>

/**
 *rev_string - function reverses input string
 *@s: input string
 */

void rev_string(char *s)
{
int i;
char temp;
for (i = 0; i <= _strlen(s) / 2; i++)
{
temp = s[i];
s[i] = s[_strlen(s) - i - 1];
s[_strlen(s) - i - 1] = temp;
}
}

/**
 *_strlen - finds the lenght of a string
 *@s: the string in question
 *Return: returns the lenght as an integer
 */
int _strlen(char *s)
{
int ctr = 0;

while (*(s + ctr))
ctr++;
return (ctr);
}
