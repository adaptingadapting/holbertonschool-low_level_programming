#ifndef hola_h
#define hola_h
/**
 *struct dog - dog
 *@name: name
 *@age: age
 *@owner: owner
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
