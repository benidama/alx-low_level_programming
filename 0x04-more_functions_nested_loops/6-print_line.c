#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @m: number of times the character _ should be printed
 */
void print_line(int m)
{
if (m <= 0)
{
_putchar('\n');
} else
{
int i;
for (i = 1; i <= m; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
