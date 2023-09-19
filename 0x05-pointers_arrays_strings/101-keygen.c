#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry 
 * Return: 0
 */
int main(void)
{
	int sum;
	char x;

	strand(time(NULL));
	while (sum <= 2645)
	{
		x = rand() % 128;
		sum += x;
		putchar(x);
	}
	putchar(2772 - sum);
	return (0);
}
