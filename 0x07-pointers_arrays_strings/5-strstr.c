#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input value
 * @needle: input value
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *u = haystack;
		char *f = needle;

		while (*u == *f && *f != '\0')
		{
			u++;
			f++;
		}

		if (*f == '\0')
			return (haystack);
	}
	return (0);
}
