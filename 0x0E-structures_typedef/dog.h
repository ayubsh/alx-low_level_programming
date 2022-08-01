#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog structure
 * @name: ptr to the name of the dog
 * @age: age of the dog
 * @owner: ptr to the owner of the dog
 * Description: its a structure for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
