#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - Prints the sum of args positive numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	int i;
	unsigned int y, sum = 0;
	char *v;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			v = argv[i];

			for (y = 0; y < strlen(v); y++)
			{
				if (v[y] < 48 || v[y] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(v);
			v++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
