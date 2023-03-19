#include <stdio.h>

#include <stdlib.h>

#include <time.h>



/** * main - Write a program that prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */

int main(void)

{
        int h;
        char low;
        
        for (h = '0'; h <= '9'; h++)
        putchar(h);

	for(low = 'a'; low <= 'f'; low++)
	putchar(low);
        putchar('\n');
        
        return (0);
        
}
