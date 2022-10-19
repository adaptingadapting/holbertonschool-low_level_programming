#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiply numbers
 * @argc: num of arguments
 * @argv: array of strings
 * Return: not much
 */

int main(int argc, char *argv[])
{
int i, mult;

if (argc != 3)
{
printf("Error\n");
return (1);
}
for (i = 1, mult = 1; i < argc; i++)
mult *= atoi(argv[i]);
printf("%d\n", mult);
return (0);
}
