#include "main.h"
#include <stdlib.h>
/**
 * _strdup - allocate space which contains copy of str.
 * @str: string to copy.
 * Return: new space in memory.
 */
char *_strdup(char *str)
{
int i, len;
char *p;
if (str == NULL)
return (NULL);
for (len = 0; str[len]; len++)
;
p = malloc(len + 1);
if (p == NULL)
return (NULL);
for (i = 0; i < len; i++)
p[i] = str[i];
p[i] = '\0';
return (p);
}
