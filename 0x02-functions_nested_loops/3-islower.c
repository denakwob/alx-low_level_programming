#include "main.h"
/**
 * int _islower - checks for lower case 
 * @c: argument
 *
 * Return: on success 1
 *
 * Author - Nana Obeng
 */
int _islower(int c)
{
	/*local variable for response*/
	int res;

	if (c >= 97 && c <= 122)
	{
		res = '1';
	}
	else
	{
		res = '0';
	}
	return res;
}	
