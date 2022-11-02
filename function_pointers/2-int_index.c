#include "function_pointers.h"

/**
 * int_index - simp lord
 * @array: sl
 * @size: sl
 * @cmp: sl
 * Return: something
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
return (-1);
if (!(cmp) || !(array))
return (-1);
else
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
return (-1);
}
