#include <stdio.h>
/**
  * main - count arguments
  * @argc: argument count
  * @argv: argument vector
  * Return: void
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", atoi(argc) - 1);
	return (0);
}
