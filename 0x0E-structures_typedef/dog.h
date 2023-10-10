#ifndef DOG_H
#define DOG_H

#include <stdio.h>

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
  * typedef struct dog- short description
  * @name: first member
  * @age: second member
  * @owner: third member
  * @dog_t: alias for dog
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
