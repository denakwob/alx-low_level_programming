#include <stdio.h>
/**
 * main - prints the size of each integer value
 *
 * Return: 0 upon successful execution of commands
 *
 * Author - Nana Obeng
 */

int main(void)
{
  printf("Size of a char: %ld \n", sizeof(char));
  printf("Size of an int: %lu \n", sizeof(int));
  printf("Size of a long int: %ld \n", sizeof(long int));
  printf("Size of a long long int: %ld \n", sizeof(long long int));
  printf("Size of a float: %ld \n", sizeof(float));
  return (0);
}
