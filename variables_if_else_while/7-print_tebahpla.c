#include <stdio.h>

/**
 * main - Entry point for program
 *
 * Description: print the entire alphabet in reverse
 *
 * Return: Always 0 (Success) and the alphabet
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
