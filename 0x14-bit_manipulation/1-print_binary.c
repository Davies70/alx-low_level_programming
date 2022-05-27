#include "main.h"
/**
* print_binary - func that converts dec to bin
* @n: decimal intgerter
* Return: void
*/
void print_binary(unsigned long int n)
{
int value, bit;

for (bit = 31; bit >= 0; bit--)
{
value = n >> bit;
if (value & 1)
_putchar ('1');
else
_putchar ('0');
}
_putchar('\n');

}
