#include <stdio.h>
/**
 * main - entry
 * Return: 0 (success)
 */
int main(void)
{
	printf("Size of a char: %lu bytes\n", sizeof(char));
	printf("size of a int: %lu bytes\n", sizeof(int));
	printf("size of a long int: %lu bytes\n", sizeof(long int));
	printf("size of a long long int: %lu bytes\n", sizeof(long long int));
	printf("size of a float: %lu bytes", sizeof(float));
	return (0);
}
