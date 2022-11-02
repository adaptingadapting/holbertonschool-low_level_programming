#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line
 * @separator: String separator
 * @n: Number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list vl;
va_start(vl, n);

for (i = 0; i < n; i++)
{
str = va_arg(vl, char *);

if (!(str))
printf("(nil)");
else
printf("%s", str);
if (separatorm && i < (n - 1))
printf("%s", separator);
}
printf("\n");
va_end(vl);
}
