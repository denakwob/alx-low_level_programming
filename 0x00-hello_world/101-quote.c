#include <unistd.h>
/**
 * main - prints the string 
 *
 * Return: 1 upon success
 *
 * Author - Nana Obeng
 */

int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, str, 38);
	return (1);
}
