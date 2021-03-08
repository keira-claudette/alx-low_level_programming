#ifndef DOG_H
#define DOG_H

/**
 * struct dog - for a dogs biodata
 * @name: first member
 * @age: second member
 * @owner: Third member
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
