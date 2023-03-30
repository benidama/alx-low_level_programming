#include "main.h"

/**
  * reverse_array - Reverses the content of an array of integers
  * @a: An array of integers
  * @n: Number of elements to swap
  *
  * Return: Reversed content
  */

void reverse_array(int *a, int n)
{
	int *x, i, joa, y;

	x = a;

	for (i = 1; i < n; i++)
	{
		x++;
	}

	for (y = 0; y < i / 2; y++)
	{
		joa = a[y];
		a[y] = *x;
		*x = joa;
		x--;
	}
}
