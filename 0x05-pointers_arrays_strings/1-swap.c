#include "main.h"

/**
  * swap_int - Swaps the values of two integers
  *
  * @a: First integer to swap
  * @b: Second integer to swap
  *
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int joa;

	joa = *a;
	*a = *b;
	*b = joa;
}
