#include "main.h"
#include <stdio.h>

/**
 *_memset - sets the first n number of b bytes in the s memory area
 *@n: number of bytes to be set
 *@s: memory area to be set
 *@b: byte to be set
 *Return: returned string, now changed
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i <= n; i++)
{
s[i] = b;
}
return (s);
}
