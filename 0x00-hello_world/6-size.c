#include <stdio.h>
/**
 * main - entry
 * Return: 0 (success)
 */
int main(void)
{
	printf("Size of a char: %d bytes\n", sizeof(char));
	printf("size of a int: %d bytes\n", sizeof(int));
	printf("size of a long int: %d bytes\n", sizeof(long int));
	printf("size of a long long int: %d bytes\n", sizeof(long long int));
	printf("size of a float: %d bytes", sizeof(float));
	return (0);
}
