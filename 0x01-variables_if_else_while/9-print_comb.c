#include <stdio.h>

/**
 * main - prints all combnations of single digit
 * Return:Always 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)i
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
