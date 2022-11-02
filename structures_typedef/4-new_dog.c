#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - new dog
 * @name: how to be a simp lord
 * @age: how to be a simp lord
 * @owner: how to be a simp lord
 * Return: htbasl
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p;

p = malloc(sizeof(dog_t));
if (!(p))
return (NULL);

p->name = malloc(strlen(name) + 1);
if (!(p->name))
{
free(p);
return (NULL);
}
strcpy(p->name, name);
p->age = age;

p->owner = malloc(strlen(owner) + 1);
if (!(p->owner))
{
free(p->name);
free(p);
return (NULL);
}
strcpy(p->owner, owner);
return (p);
}
