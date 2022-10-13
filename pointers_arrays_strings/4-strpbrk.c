#include "main.h"
#include <stdio.h>

/**
 *_strpbrk - does something
 *@s: string
 *@accept: accept
 *Return: rturns something
 */

char *_strpbrk(char *s, char *accept)
{
int i;
int j;
int result = 0;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
result = i;
break;
}
}
if (result != 0)
break;
}
return (s + result);
}
