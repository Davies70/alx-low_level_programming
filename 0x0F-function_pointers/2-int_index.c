/**
*@int_index - func name
*@size: size of array
*@cmp: pointer to function
*Return: -1 or 1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (!array || !size || !cmp)
return (-1);
if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
cmp(array[i]);
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}


