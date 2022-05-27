#include "main.h"
/**
* get_bit - return bit at given pos
* @n: decimal
* @index: position
* Return: value
*/

int get_bit(unsigned long int n, unsigned int index)
{
int value;

if (index == 0)
{
value = n & 1;
return (value);
}
else
{
value = (n >> index) & 1;
return (value);
}
if (!value || !index || !n)
return (-1);
}
