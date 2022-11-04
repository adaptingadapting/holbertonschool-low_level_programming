#ifndef printf_header
#define printf_header
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

void print(long long int n);
int _printf(const char *format, ...);
void _prontf(const char *format, va_list args);

#endif
