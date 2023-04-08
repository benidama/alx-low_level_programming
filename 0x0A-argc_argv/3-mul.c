#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the multiplication of two args numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	int nber1 = 0, nber2 = 0;

	if (argc == 3)
	{
		nber1 = atoi(argv[1]);
		nber2 = atoi(argv[2]);
		printf("%d\n", nber1 * nber2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

