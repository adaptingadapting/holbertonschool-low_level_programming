#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_separator - print separator
 * @format: is a list of types of arguments passed to the function
 * @i: integer
 * Return: void
 */

void print_separator(const char * const format, int i)
{
  if (format != NULL && format[i + 1] != '\0')
    printf(", ");
}

/**
 * print_all - prints anything
 * @format: list
 */

void print_all(const char * const format, ...)
{
  int i = 0;
  char *aux;
  va_list ap;

va_start(ap, format);
while ((format) && (format[i]))
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(ap, int));
print_separator(format, i);
break;
case 'i':
printf("%d", va_arg(ap, int));
print_separator(format, i);
break;
case 'f':
printf("%f", va_arg(ap, double));
print_separator(format, i);
break;
case 's':
aux = va_arg(ap, char*);
if (aux)
{
printf("%s", aux);
print_separator(format, i);
}
else
{
printf("(nil)");
print_separator(format, i);
}
break;
}
i++;
}
printf("\n");
va_end(ap);
}
