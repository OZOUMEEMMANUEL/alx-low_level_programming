#include<stdio.h>

/*
 * main - Write a program that prints _putchar, followed by a new line.
 * The program should return 0
 * return = 0
 */

int main(void)
{
	int i;
	char p[] ="_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(p[i]);
	}
	_putchar("\n");
	return (0);
}
