#include "main.h"
/**
 * _isalpha - checks for alphabets
 * @c: argument
 *
 * Return: on success 1
 *
 * Author - Nana Obeng
 */
int _isalpha(int c)
{
	/* checks lowercase */
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	/* checks uppercase */
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
