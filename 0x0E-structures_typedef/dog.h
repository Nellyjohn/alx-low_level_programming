#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
  * struct dog - short description
  * @name: first memeber
  * @age: second memeber
  * @owner: third member
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  * struct dog_t - structure
  * @name: first member
  * @age: second member
  * @owner: thrid member
  */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
