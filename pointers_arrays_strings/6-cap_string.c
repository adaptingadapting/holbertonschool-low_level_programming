#include "main.h"
#include <stdio.h>

/**
 *cap_string - capitalizes the input string, all words
 *@s: string to be capitalized
 *Return: returns the capitalized string
 */

char *cap_string(char *s)
{
int i;
for (i = 0; s[i]; i++)
if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
s[i] == ',' || s[i] == '.' || s[i] == '.' ||
s[i] == ';' || s[i] == '(' || s[i] == ')' ||
s[i] == '}' || s[i] == '{' || s[i] == '!' || s[i] == '?')
{
if (s[i + 1] >= 95 &&  s[i + 1] <= 122)
s[i + 1] = s[i + 1] - 32;
}
if (s[0] >= 95 && s[0] <= 122)
s[0] = s[0] - 32;
return (s);
}
