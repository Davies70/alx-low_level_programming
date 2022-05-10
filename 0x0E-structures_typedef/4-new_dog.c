#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* new_dog - name of fuction
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: p or NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p;
int a, b, i;

a = 0;
b = 0;
while (name[a])
{
a++;
}
while (owner[b])
{
b++;
}
p = malloc(sizeof(dog_t));
if (p == NULL)
return (NULL);
p->name = malloc(sizeof(p->name) * a);
if (p == NULL)
return (NULL);
for (i = 0; i < a; i++)
p->name[i] = name[i];
p->age = age;
p->owner = malloc(sizeof(p->owner) * b);
if (p == NULL)
return (NULL);
for (i = 0; i < b; i++)
p->owner[i] = owner[i];
return (p);
}
