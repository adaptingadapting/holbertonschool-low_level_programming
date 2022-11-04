#include "main.h"

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
