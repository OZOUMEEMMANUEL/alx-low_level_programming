#include<stdio.h>
/*
 * main = check code
 *
 * Return: 0
 */

int main(void)
{
	int n;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (n = 0; n < 26; n++)
	{
		putchar(alphabet[n]);
	}
	putchar('\n');
	return (0);

}
