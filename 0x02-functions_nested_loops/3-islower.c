#include "main.h"
/**
 * _islower - checks for lower case
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
		return (1);
	}
	else
	{
		return (0);
	}
}
