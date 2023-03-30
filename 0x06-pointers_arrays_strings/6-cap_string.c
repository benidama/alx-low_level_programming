#include "main.h"

/**
  * cap_string - capitalizes all words
  * @s: capitalized words
  *
  * Return: Correct value
  */

char *cap_string(char *s)
{
	int a = 0, i;
	int muri = 13;
	char kari[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < muri)
		{
			if ((a == 0 || s[a - 1] == kari[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;

			i++;
		}

		a++;
	}

	return (s);
}
