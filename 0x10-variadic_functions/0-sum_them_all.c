#include <stdarg>
#include <stdio.h>
#include "variadic_functions.h"
/**
* sum_them_all - func to sum
* @n: arg
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
int i = 0, sum = 0;

if (n == 0)
return (0);
va_list ap;
va_start(ap, n);
for (i = 0; i < n; i++)
sum += va_arg(ap, const unsigned int);
va_end(ap);
return (sum);
}

