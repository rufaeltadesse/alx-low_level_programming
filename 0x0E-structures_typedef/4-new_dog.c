#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - main entry
 * @name: variable
 * @age: age variable
 * @owner: is the owner
 * Return: struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a;

	a = malloc(sizeof(dog_t));
	if (a == NULL)
		return (NULL);
	a->name = name;
	a->age = age;
	a->owner = owner;
	return (a);
}
