#include "main.h"
#include <stdio.h>

/**
 *_memcpy - copies a string to dest from source, only n bytes
 *@dest: destination string
 *@src; source to copy from
 *@n: bytes to copy
 *Return: returns destination string changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
  
