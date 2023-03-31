#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @a: argument
 *
 * Return: a on succces
 *
 * Author - Nana Obeng;
 */
int print_last_digit(int a)
{
	int num;

	num = abs(a) % 10;

	if (a == INT_MIN)
	{
		num = 8;
	}
	_putchar(num + '0');
	return (num);
}
