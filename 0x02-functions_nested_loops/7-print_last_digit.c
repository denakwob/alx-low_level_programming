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
	char final_ans;

	if (a < 0)
	{
		a = a * -1;
	}
	num = a % 10;
	final_ans = num + '0';
	
	_putchar(final_ans);
	return (num);
}
