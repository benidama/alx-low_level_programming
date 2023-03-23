#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
long int m;
long int larg;
long int i;
m = 612852475143;
larg = -1;
while (m % 2 == 0)
{
larg = 2;
m /= 2;
}
for (i = 3; i <= sqrt(m); i = i + 2)
{
while (m % i == 0)
{
larg = i;
m = m / i;
}
}
if (m > 2)
larg = m;
printf("%ld\n", larg);
return (0);
}
