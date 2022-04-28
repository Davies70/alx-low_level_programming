#include "main.h"
/**
 * factorial - fuction to calculate factorial
 *@n: integer
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
