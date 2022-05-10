#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - struct declaration
 * @name: string
 * @age: float variable
 * @owner: string
 */
typedef struct dog_t
{
char *name;
float age;
char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
