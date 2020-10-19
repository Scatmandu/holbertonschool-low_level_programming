#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>
#include <stdlib.h>

/**
*struct dog- contains name age and owner of dog
*@name: dog's name
*@age: dog's age
*@owner: dog's owner
**/
struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef struct dog dog_t;

int _putchar(char c);

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
