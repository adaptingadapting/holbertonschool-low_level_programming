#include "function_pointers.h"

/**
 * array_iterator - htbtdsl
 *@array: htbtdsl
 *@size: htbtdsl
 *@action: htbtdsl
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (!(action) || !(array))
{
return;
}

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
