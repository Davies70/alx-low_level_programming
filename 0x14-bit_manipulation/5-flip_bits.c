#include "main.h"
/**
* flip_bits - return bits
* @n: decimal int
* @m: position
* Return: number
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int value;
int count = 0;

if (n > ULONG_MAX)
return (-1);
if (m > ULONG_MAX)
return (-1);
value = n ^ m;
while (value > 0)
{
count++;
value &= (value - 1);
}
return (count);
}
