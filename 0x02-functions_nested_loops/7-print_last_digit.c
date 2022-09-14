#include<stdio.h>
/*
 * print_last_digit - a function that prints the last digit of a number
 * Return: value of the last digit
 *
 */
int print_last_digit(int nld)
{
	int mmm;

	mmm = (nld % 10);

	if (mmm < 0)
	{
		mmm = (-1 * mmm);
	}
	putchar(mmm + '0');
	return (mmm);
}
