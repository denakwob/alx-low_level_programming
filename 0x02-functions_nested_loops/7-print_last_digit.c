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

	num = abs(num) % 10;

	_putchar(num + '0');
	return (num);
}
