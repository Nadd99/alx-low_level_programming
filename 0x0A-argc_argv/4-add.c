#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * main - entry
 * @argv: vector
 * @argc: count
 * Return: void
 */
int main(int argc, char *argv[])
{
	int i = 0;
	unsigned int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (atoi(argv[i]) < 0 || atoi(argv[i]) > 9)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
			{
				sum += atoi(argv[i]);
			}
		printf("%d\n", sum);
	}
	return (0);
}
