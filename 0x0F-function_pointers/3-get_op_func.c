#include "calc.h"
#include <stdio.h>

/**
* get_op_func - function name
* @s: string
*/

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;

i = 0;
while (i < 6)
{
ops[i].op;
ops[i].f;
i++;
if (s == ops[i].op)
return (op[i].f);
}
return (NULL);
}
