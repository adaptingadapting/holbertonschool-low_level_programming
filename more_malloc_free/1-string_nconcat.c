#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int range(int a, int b);

/**
 * string_nconcat - concatenates
 * @s1: string
 * @s2: string 2
 * @n: max number of bytes
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i, j, m;
char *p;

if (s1 == NULL)
return (string_nconcat("", s2, n));
if (s2 == NULL)
return (string_nconcat(s1, "", n));

for (i = 0; s1[i]; i++)
continue;
for (j = 0; s2[j]; j++)
continue;

p = malloc(i + range(j, n) + 1);
if (p == NULL)
return (NULL);

for (m = 0; m < i; m++)
p[m] = s1[m];
for (m = 0; m < j && m < (int) n; m++)
p[i + m] = s2[m];
p[i + m] = '\0';
return (p);
}

/**
 * range - return the minimum
 * @a: number
 * @b: numbrt
 * Return: range(a, b)
 */

int range(int a, int b)
{
if (a < b)
return (a);
return (b);
}
