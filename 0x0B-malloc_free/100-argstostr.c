#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * argstostr - concatenates all the args of your program
  * @ac: the argument count
  * @av: the argument vector
  *
  * Return: ...
  */

char *argstostr(int ac, char **av)
{
	int st = 0, i = 0, j = 0, y = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			st++;
			j++;
		}

		j = 0;
		i++;
	}

	s = malloc((sizeof(char) * st) + ac + 1);

	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			s[y] = av[i][j];
			y++;
			j++;
		}

		s[y] = '\n';

		j = 0;
		y++;
		i++;
	}

	y++;
	s[y] = '\0';
	return (s);
}
