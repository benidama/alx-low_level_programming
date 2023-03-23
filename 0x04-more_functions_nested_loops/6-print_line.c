#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @m: number of times the character _ should be printed
 */
void print_line(int m)
{
int i;
if (m <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < m; i++)
{
_putchar(95);
}
_putchar('\n');
}
}
