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

if (min > max)
return (NULL);
if (min < 0 && max < 0)
n = 1 + (-1 * (min - max));
else
n = max - min + 1;
if (n < 0)
n = n * -1;
p = malloc(sizeof(int) * n);
if (!p)
return (NULL);
for (i = min; i <= max; i++)
{
p[j] = i;
j++;
}
return (p);
}
