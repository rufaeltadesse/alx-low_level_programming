/**
 * struct dog - my dog description
 * @name: is name of the dog
 * @age: is the age of the dog
 * @owner: is the owner of the dog
 *
 * Description: main entry
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
