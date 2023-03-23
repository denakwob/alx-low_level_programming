#include <stdio.h>
/**
 * main - prints the string 
 *
 * Return: 1 upon success
 *
 * Author - Nana Obeng
 */

int main(void)
{
	char *str = "and that piece of art is useful" - Dora Korpar, 2015-10-19";
	int len = strlen(str);
	write(STDOUT_FILENO, str, len);
	return (1);
}
