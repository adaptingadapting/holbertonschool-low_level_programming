#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: Separator
 * @n: Number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list vl;
va_start(vl, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(vl, int));
if ((separator) && i != (n - 1))
printf("%s", separator);
}
printf("\n");
va_end(vl);
}
