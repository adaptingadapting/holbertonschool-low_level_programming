#include "main.h"
#include <stdio.h>

/**
 *leet - translates string into leet code
 *@s: string to be trnalsated
 *Return: returns the translated string
 */

char *leet(char *s)
{
int i;
int j;
char letterstr[] = {97, 101, 108, 111, 116};
char numberarry[] = {52, 51, 49, 48, 55};
for (i = 0; s[i]; i++)
{
for (j = 0; j < 5; j++)
{
if (s[i] == letterstr[j] || s[i] + 32 == letterstr[j])
{
s[i] = numberarry[j];
}
}
}
return (s);
}
