#include "main.h"
/**
 * more_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i = 0;
	int j;
	int a;
	int b;

	while (i <= 9)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
				a = j;
			else
			{
				a = j / 10;
			}
			_putchar(a + '0');
			b = j % 10;
			if (j > 9)
				_putchar(b + '0');

		}
		_putchar('\n');
		i++;
	}
}
