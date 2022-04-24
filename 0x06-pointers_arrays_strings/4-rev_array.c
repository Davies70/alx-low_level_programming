#include "main.h"
/**
 * reverse_array - Entry point
 *@a: string
 *@n: interger size
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
	while (n--)
	{
		printf("%d", a[n]);
		if (n == 0)
			printf("\n");
		else
			printf(", ");
	}
}
