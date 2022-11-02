#ifndef hola_h
#define hola_h
/**
 *struct dog - dog
 *@name: name
 *@age: age
 *@owner: ow
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog;
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
