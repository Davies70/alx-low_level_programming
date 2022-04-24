#include "main.h"
/**
 * reverse_array - Entry point
 *@a: string
 *@n: interger size
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
	int i = 0, taille, k;
	int c;

	taille = n - 1;
	k = taille / 2;

	while (i <= k)
	{
		c = a[i];
		a[i] = a[taille];
		a[taille] = c;
		i++;
		taille--;
	}
}
