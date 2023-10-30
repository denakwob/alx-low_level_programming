#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the argument count
 * @argc: number of arguments
 * @argv: array
 *
 * Return: 0 upon success
 * Author - Nana Obeng
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
