#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n - argument
 *
 * Return: on success 1, 0 otherwise
 *
 * Author - Nana Obeng
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if ( n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

