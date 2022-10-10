#include "main.h"
#include <stdio.h>

/**
 *rev_string - function reverses input string
 *@s: input string
 */

void rev_string(char *s)
{
int i;

for (i = 0; i <= _strlen(s); i++)
{
  s[i] = s[_strlen(s) - i]; 

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
