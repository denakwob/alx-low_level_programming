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
	if (c >= 97 && c <= 122)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}	
