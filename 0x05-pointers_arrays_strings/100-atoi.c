#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to convert
 *
 * Return: An integer
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int un = 0;
	int min = 1;
	int ber = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			ber = 1;
			un = (un * 10) + (s[c] - '0');
			c++;
		}

		if (ber == 1)
		{
			break;
		}

		c++;
	}

	un *= min;
	return (un);
}
