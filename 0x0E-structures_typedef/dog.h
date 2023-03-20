/**
 * struct dog - my dog description
 * @name: is name of the dog
 * @age: is the age of the dog
 * @owner: is the owner of the dog
 *
 * Description: main entry
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);
