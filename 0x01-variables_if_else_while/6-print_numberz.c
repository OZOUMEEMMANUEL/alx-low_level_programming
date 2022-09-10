#include <stdio.h>

/**
 *main - program that prints all single digit numbers of base 10 starting from 0,
 *You can only use the putchar function
 *You can only use putchar twice in your code
 *Return: 0
 */

int main(void)
{
	int d;
	for(d='0'; d<='9'; d++)
	{
		putchar(d);
		
	}
	putchar('\n');
	return (0);
}
