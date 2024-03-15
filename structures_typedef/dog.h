#ifndef dog_h
#define dog_h

/**
 * struct dog - new description of structure
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 * Return: Always 0.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif


