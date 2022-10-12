#include "main.h"
#include <stdio.h>

/**
 *_strcat - concatenates two strings, from source (src) to destination (dest)
 *@src: source to cat from
 *@dest: destination string
 *Return: returns a pointer to dest
 */

char *_strcat(char *dest, char *src)
{
int i;
int j;
for (i = 0; dest[i]; i++)
{
}
for (j = 0; j < src[j]; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = src[j];
return (dest);
}

/**
 *_strlen - returns the lenght of an array
 *@s: the array to be parsed
 *Return: the number of characters
 */

int _strlen(char *s)
{
int ctr;
while (*(s + ctr))
ctr++;
return (ctr);
}
