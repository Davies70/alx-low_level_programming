#include "dog.h"
#include <stdio.h>

/**
* init_dog - fuction to initialize struct
* @d: name of pointer
* @name: string
* @age: float
* @owner: string
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
			d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

