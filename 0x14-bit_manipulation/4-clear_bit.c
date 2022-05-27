#include "main.h"

/**
*clear_bit - set value of bit
*@n: integer pointer
*@index: position
*Return: 1 or -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(n) * 8 - 1)
return (-1);
*n = (*n & ~(1UL << index)) | (0 << index);
return (1);
}
