#include "main.h"
/**
 * print_line - Entry point
 *@n: number of lines
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int a = 0;

	if (n < 0)
		n = n * -1;
	if (n == 0)
		_putchar('\n');
	if (n >= 1)
	{
		while (a < n)
		{
			_putchar('_');
			a++;
		}
		_putchar('\n');
	}
}
