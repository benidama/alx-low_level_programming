#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @u: the int to check
 * Return: 1 and prints + if u is greater than zero
 * 0 and prints 0 if u is zero
 * -1 and prints - if u is less than zero
 */
int print_sign(int u)
{
if (u > 0)
{
_putchar(43);
return (1);
}
else if (u == 0)
{
_putchar(48);
return (0);
}
else if (u < 0)
{
_putchar('-');
}
else
{
_putchar(45);
return (-1);
}
}
