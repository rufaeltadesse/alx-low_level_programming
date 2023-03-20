#include <stddef.h>
#include "dog.h"
/**
 * init_dog - main entry
 * @d: is the struct
 * @name: is name of the dog
 * @age: age of the dog
 * @owner: is the owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
