#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - tired
 * @a: a
 * @size: e
 * Return: a
 */

void print_diagsums(int *a, int size)
{
int i,
int j = 0;
int k = 0;
for (i = 0; i < size; i++)
{
j = j + a[i * (size + 1)];
k = k + a[(size - 1) * (i + 1)];
}
printf("%d, %d\n", j, k);
}
