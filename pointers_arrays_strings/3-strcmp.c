/**
 *_strcmp - compares two strings
 *@s1: string 1 (compares to the second one)
 *@s2: string 2
 *Return: returns either a positive or a ne
 *gative or 0 depending on the result of the comparison
 */

int _strcmp(char *s1, char *s2)
{
int res;
if (s1 == s2)
{
res = 0;
}
else if (s1 > s2)
{
res = (-13);
}
else
{
res = (13);
}
return (res);
}
