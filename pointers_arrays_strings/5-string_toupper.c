#include "main.h"
#include <stdio.h>

/**
 *string_toupper - the function that changes to upper  
 *@jero: the string to be changed to upper case
 *Return: returns the uppercase string
 */

char *string_toupper(char *jero)
{
int i;
for (i = 0; jero[i]; i++)
jero[i] = jero[i] - 32;
return (jero);
}
