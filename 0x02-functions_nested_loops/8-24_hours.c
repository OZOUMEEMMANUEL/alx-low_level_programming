#include<stdio.h>
/*
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 *h = hour, m = minutes
 *10 allows second digit to rotate
 *Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			putchar((h / 10) + '0');
			putchar((h % 10) + '0');
			putchar(':');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar('\n');
		}
	}
}
