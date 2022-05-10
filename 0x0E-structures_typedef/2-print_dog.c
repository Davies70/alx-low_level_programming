#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function to print struct
 * @d: pointer to struct
 */
void print_dog(struct dog *d)
{
	
	if (d == NULL)
		return;
	if (d)
	{
		d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)\n"));
		d->age ? (printf("Age: %f\n", d->age)) : (printf("Age: (nil)\n"));
		d->owner ? (printf("Owner: %s\n", d->owner)) : (printf("Owner: (nil)\n"));
	}
}
