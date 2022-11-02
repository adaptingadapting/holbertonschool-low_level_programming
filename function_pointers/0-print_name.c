#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - a
 * @name: Name
 * @f: Pointer
 */

void print_name(char *name, void (*f)(char *))
{
if (f)
f(name);
}
