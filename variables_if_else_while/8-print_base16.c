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

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar('0' + i);
		} else
		{
			putchar('a' + (i - 10));
		}
	}
	putchar('\n');
	return (0);
}
