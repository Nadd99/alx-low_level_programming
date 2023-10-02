#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * main - multiplication
  * @argc: argument count
  * @argv: argument vector
  * Return: void
  */
int main(int argc, char **argv)
{
	int multi;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		multi = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multi);
		return (0);
	}
}
