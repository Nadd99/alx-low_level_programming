#include <stdio.h>
/**
 * main - entry
 * Return: 0 (success)
 */
int main(void)
{
	printf("Size of a char: %d bytes", sizeof(char));
	printf("size of a int: %d bytes", sizeof(int));
	printf("size of a long int: %d bytes", sizeof(long int));
	printf("size of a long long int: %d bytes", sizeof(long long int));
	printf("size of a float: %d bytes", sizeof(float));
	return (0);
}
