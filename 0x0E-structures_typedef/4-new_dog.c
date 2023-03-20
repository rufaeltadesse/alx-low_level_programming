#include "dog.h"
#include <string.h>
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
	if (a == NULL || name == NULL || owner == NULL || age < 0)
	{
		return (NULL);
	}
	else
	{
	a->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (a->name == NULL)
	{
		return (NULL);
	}
	else
		strcpy(a->name, name);
	a->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (a->owner == NULL)
	{
		return (NULL);
	}
	else
		strcpy(a->owner, owner);
	a->age = age;
	}
	return (a);
}
