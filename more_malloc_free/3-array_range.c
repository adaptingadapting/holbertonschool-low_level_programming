#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates array
 * @min: minimum
 * @max: maximum
 * Return: pointer
 */

int *array_range(int min, int max)
{
int i, j;
int *p;

if (min > max)
return (NULL);

p = malloc((max - min + 1) * sizeof(int));
if (p == NULL)
return (NULL);
for (i = min, j = 0; i <= max; i++, j++)
p[j] = i;

return (p);
}
