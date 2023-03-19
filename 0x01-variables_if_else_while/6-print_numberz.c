#include <stdio.h>

#include <stdlib.h>

#include <time.h>



/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (Success)
 */

int main(void)

{

	int h;

	for (h = '0'; h <= '9'; h++)
	putchar(h);
	putchar('\n');

	return (0);

}

