#include "dog.h"
/**
*init_dog- initializes dog
*@d: pointer to dog struct
*@name: dog name
*@age: dog age
*@owner: dog owner
*Return: void
**/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
