#include<stdio.h>
/**
 * main - prints string
 * Return: return the printed string and end the function
 */
int main(void)
{
printf("Size of int: %zu bytes\n", sizeof(char));
printf("Size of float: %zu bytes\n", sizeof(int));
printf("Size of long int: %zu bytes\n", sizeof(long));
printf("Size of long long: %zu byte\n", sizeof(long long));
printf("Size of float: %zu byte\n", sizeof(float));
return (0);
}
