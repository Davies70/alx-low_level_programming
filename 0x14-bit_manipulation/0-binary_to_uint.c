#include "main.h"


/**
* binary_to_uint - function that
* coverts binary to decimals
* @b: pointer to string of zeros and ones
* Return: 0 or converted number
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int decimal = 0, weight = 1;
int index;
int i = 0;

if (b == NULL)
return (0);
while (b[i] != '\0')
{
i++;
}
for (index = i - 1; index >= 0; index--)
{
if (b[index] != '1' && b[index] != '0')
return (0);
if (b[index] == '1')
{
decimal += weight;
}
weight *= 2;
}
return (decimal);
}
