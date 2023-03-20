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
	unsigned int j;

	if (name == NULL || owner == NULL || age < 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(dog_t));
	if (a == NULL)
	{
		return (NULL);
	}
	else
	{
	j = 0;
	while(*name++)
	j++;
	a->name = malloc(sizeof(char) * (j + 1));
	if (a->name == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < strlen(name); i++)
			a->name[i] = name[i];
		a->name[i] = '\0';
	}
	j = 0;
	while(*owner++)
		j++;
	a->owner = malloc(sizeof(char) * (j + 1));
	if (a->owner == NULL)
	{
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
}
