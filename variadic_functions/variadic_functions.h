#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

void print_sep(int i, char c);
void print_all(const char *const format, ...);
void print_strings(const char *s, const unsigned int n, ...);
void print_numbers(const char *s, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);


#endif
