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
  * dog_t - typedef for struct
  */
typedef struct dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
