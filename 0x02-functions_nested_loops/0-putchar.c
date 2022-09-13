#include<stdio.h>

/*
 * main - Write a program that prints _putchar, followed by a new line.
 *
 * Describtion: The program should return 0
 *
 * Return: 0 (SUCCESS)
 */

int main(void)
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		putchar(p[i]);
	}
	putchar('\n');
	return (0);
}
