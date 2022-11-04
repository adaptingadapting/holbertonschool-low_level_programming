#include "main.h"
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
      for (arrayIterator = 0; escapeSeqArray[arrayIterator]; arrayIterator++)
	if (format[strlen + 1] == escapeSeqArray[arrayIterator])
	  {
	    strlen++;
	    escapeSequences += 1;
	  }
  return (strlen - escapeSequences);
}
