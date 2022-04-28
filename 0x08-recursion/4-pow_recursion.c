#include "main.h"
/**
 * _pow_recursion - fuction of pow
 *@x: integer x
 *@y: integer y
 * Return: Always 0 (Success)
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
