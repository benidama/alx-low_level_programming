#include "main.h"

/**
 * print_most_numbers - print numbers except 2 and 4
 *
 * return: void
 */

void print_most_numbers(void)
{
char u;
for (u = '0'; u <= '9'; u++)
{
if (!(u == '2' || u == '4'))
_putchar(u);
}
_putchar('\n');
}
