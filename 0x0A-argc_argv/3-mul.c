#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs multiplication
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 upon success
 * Author - Nana Obeng
 */

int main(int argc, char *argv[])
{
	int i;
	long mul = 1, num;
	char *ptr;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			num = strtol(argv[i], &ptr, 10);
			mul *= num;
		}
		printf("%ld\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
