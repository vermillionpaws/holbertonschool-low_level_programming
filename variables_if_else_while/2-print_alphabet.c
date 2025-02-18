#include <stdio.h>

/**
 * main - Entry point for program
 *
 * Description: print the entire alphabet
 *
 * Return: Always 0 (Success) and the alphabet
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
