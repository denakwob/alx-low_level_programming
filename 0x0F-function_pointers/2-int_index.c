#include "function_pointers.h"

/**
 * int_index - finds the index of an int elemnt
 * @array: pointer to array
 * @size: size of array
 * @cmp: compare
 *
 * Return: -1
 * Author - Nana Obeng
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
	{
		return (-1);
	}

	int i;

	for (i = 0; i < size; i++)
	{
		if(cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
