#include <stdio.h>

/**
 * main - entry
 *
 * Description: size of types
 *
 * Return: 0 (success)
 */

int main(void)
{
	printf("Size of a char: %u bytes\n", sizeof(char));
	printf("size of a int: %u bytes\n", sizeof(int));
	printf("size of a long int: %u bytes\n", sizeof(long int));
	printf("size of a long long int: %u bytes\n", sizeof(long long int));
	printf("size of a float: %u bytes\n", sizeof(float));
	return (0);
}
