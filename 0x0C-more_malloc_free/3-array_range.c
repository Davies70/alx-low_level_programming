#include <stdio.h>

#include "main.h"
#include <stdlib.h>
/**
* array_range - function to alloc array
*@min: min value
*@max: max value
* Return: Always 0 (Success)
*/
int *array_range(int min, int max)
{
int *p;
int n;
int i;
int j = 0;

n = max - min + 1;
if (n < 0)
n = n * -1;
p = malloc(sizeof(int) * n);
if (min > max)
return (NULL);
if (!p)
return (NULL);
for (i = min; i <= max && i < n; i++)
{
p[j] = i;
j++;
}
return (p);
}
