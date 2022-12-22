#include "variadic_functions.h"

/**
 * print_all - formatted printing
 * @format: format to print
 */

void print_all(const char *const format, ...)
{
	int i = 0;
	va_list ap;
	char *aux;
	int separator = 0;;

	va_start(ap, format);
	while (format[i])
	{
		print_sep(separator, format[i + 1]);
		separator = 0;		
		switch (format[i])
		{
		case 'i':
			separator = printf("%d", va_arg(ap, int));
			break;
		case 'c':
			separator = printf("%c", va_arg(ap, int));
			break;
		case 's':
			aux = va_arg(ap, char*);
			if (aux)
			{
				separator = printf("%s", aux);
				break;
			}
			separator = printf("(nil)");
			break;
		case 'f':
			separator = printf("%f", va_arg(ap, double));
			break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}

/**
 * print_sep - prints a speratror if needed
 * @string: format
 * @i: position of the format
 */

void print_sep(int i, char c)
{
	if (i && c != '\0')
		printf(", ");
}
