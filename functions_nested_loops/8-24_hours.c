
#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: 0 if success
 */

void jack_bauer(void)
{
  int a = 0;
  int b = 0;
  int c = 0;
  int d = 0;

  for (a = 0; a < 3; a++)
    {
      for (b = 0; b < 10 ; b++)
	{
	  for (c = 0; c < 6; c++)
	    {
	      for (d = 0; d < 10; d++)
		{
		  if (a == 2 && (b > 3))
		    {
		    } else {
		    _putchar(a);
		    _putchar(b);
		    _putchar(':');
		    _putchar(c);
		    _putchar(d);
		    _putchar('\n');
		  }
		}
	    }
	}
    }
}
