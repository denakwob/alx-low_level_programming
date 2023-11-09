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
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
