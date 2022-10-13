#include "main.h"
#include <stdio.h>

/**
 *_strspn - returns the number of bytes in the initial segment
 *@s: string that accepts
 *@accept: bytes that accept
 *Return: returns the number of bytes that match
 */

unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
break;
}
if (!accept[j])
break;
}
return (i);
}
