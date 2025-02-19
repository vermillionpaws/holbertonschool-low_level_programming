#include <stdio.h>

/**
 * main - Entry point for program
 *
 * Description: Print numbers from 0 to 9 and then add a newline using only putchar
 *
 * Return: Always 0 (Success) and all numbers ranging from 0 to 9
 */

int main(void)
{
	int n = 0;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}

	putchar('\n');

	return (0);
}
