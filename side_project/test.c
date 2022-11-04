#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

void print(long long int n)
{
  if (n < 0) {
    putchar('-');
    n = -n;
  }
  if (n/10)
    print(n/10);
  putchar(n%10 + '0');
}
void _prontf(const char *format, va_list args)
{
  int ctr = 0;
  int foundPercent = 0; 
  while (format[ctr])
    {
      if (!(foundPercent))
	{
	  if (format[ctr] == '%')
	    {
	      foundPercent = 1;
	    }
	  else
	    {
	      putchar(format[ctr]);
	    }
	}
      else if (foundPercent)
	{
	  switch (format[ctr])
	    {	    
	    case 's':
	      {
		char *StringFormatReplacement = va_arg(args, char *);
		while (*StringFormatReplacement)
		  putchar(*StringFormatReplacement++);
	      }
	      break;
	    case 'c':
	      {
		char CharFormatReplacement = va_arg(args, int);
		putchar(CharFormatReplacement);
		break;
	      }
	    case '%':
	      putchar('%');
	      break;
	    case 'd':
	      {
		int DecimalFormatReplacement = va_arg(args, int);
		print(DecimalFormatReplacement); 
		break;
	      }
	    case 'i':
	      {
		int IntegerFormatReplacement = va_arg(args, int);
		print(IntegerFormatReplacement);
		break;
	      }
	    case 'u':
	      {
		unsigned int UnsignedIntReplacement = va_arg(args, unsigned int);
		print(UnsignedIntReplacement);
		break;
	      }
	    default:
	      {
		putchar(format[ctr - 1]);
		putchar(format[ctr]);
		break;
	      }
	    }
	  foundPercent = 0;
	}
      ctr++;
    }
}
int _printf(const char *format, ...)
{
  int strlen;
  int escapeSequences = 0;
  int escapeSeqArray[] = {'d', 'i', 'c', 's', '%', 'u'};
  int arrayIterator;
  va_list args;
  va_start(args, format);
  _prontf(format, args);
  va_end(args);
  for (strlen = 0; format[strlen]; strlen++)
    if (format[strlen] == '%')
      {
	for (arrayIterator = 0; escapeSeqArray[arrayIterator]; arrayIterator++)
	  if (format[strlen + 1] == escapeSeqArray[arrayIterator])
	    {
	      strlen++;
	      escapeSequences =+ 1;
	    }
      }
  return (strlen - escapeSequences);
}
int main()
{
  int len;
  int len2;
  unsigned int ui;
  void *addr;
  len = _printf("Let's try to printf a simple sentence.\n");
  ui = (unsigned int)INT_MAX + 1024;
  addr = (void *)0x7ffe637541f0;
  _printf("Length:[%d, %i]\n", len, len);
  _printf("Negative:[%d]\n", -762534);
  _printf("Unsigned:[%u]\n", ui);
  _printf("Unsigned octal:[%o]\n", ui);
  _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
  _printf("Character:[%c]\n", 'H');
  _printf("String:[%s]\n", "I am a string !");
  _printf("Address:[%p]\n", addr);
  len = _printf("Percent:[%%]\n");
  _printf("Len:[%d]\n", len);
  _printf("Unknown:[%r]\n");
  return (0);
}
