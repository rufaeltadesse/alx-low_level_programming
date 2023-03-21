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
	unsigned int i;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	a = malloc(sizeof(dog_t));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	a->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (a->name == NULL)
	{
		free(a->name);
		free(a);
		return (NULL);
	}
	else
	{
		for (i = 0; i < strlen(name); i++)
			a->name[i] = name[i];
		a->name[i] = '\0';
	}
	a->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (a->owner == NULL)
	{
		free(a->owner);
		free(a);
		return (NULL);
	}
	else
	{
		for (i = 0; i < strlen(owner); i++)
			a->owner[i] = owner[i];
		a->owner[i] = '\0';
	}
	a->age = age;
	return (a);
}
