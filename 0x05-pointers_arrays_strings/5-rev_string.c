#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be reversed
  *
  * Return: String in reverse
  */

void rev_string(char *s)
{
int i;
char rev = s[0];
int count = 0;
while (s[count] != '\0')
count++;
for (i = 0; i < count; i++)
{
count--;
rev = s[i];
s[i] = s[count];
s[count] = rev;
}
}
