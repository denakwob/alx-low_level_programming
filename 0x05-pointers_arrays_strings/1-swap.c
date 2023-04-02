#include"main.h"

/**
 *swap_int - function that swaps 2 numbers
 *@a: fisrt integer
 *@b: second integer
 *@temp third integer
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
