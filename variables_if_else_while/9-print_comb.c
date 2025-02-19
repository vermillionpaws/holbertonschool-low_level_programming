#include <stdio.h>

/**
 * main - Entry point for program
 *
 * Description: print base16
 *
 * Return: Always 0 (Success) and base16
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++) 
	{
		putchar('0' + i);
		if (i < 9) {
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
