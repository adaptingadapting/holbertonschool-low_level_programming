#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

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
	      int DecimalFormatReplacement = va_arg(args, int);
	      
	      break;
	    case 'i':
	      break;
	    default:
	      break;
	    }
	  foundPercent = 0;
	}
      ctr++;
    }
}
int _printf(const char *fmt, ...)
{
  va_list args;
  va_start(args, fmt);
  _prontf(fmt, args);
  va_end(args);
}
void main()
{
  _printf("a character %c\n", 'n');
  _printf("a string %s\n", "hola");
  _printf("a percentage sign %%\n");
  _printf("an int %d\n", 24);
  _printf("another int %i\n", 25);
}
