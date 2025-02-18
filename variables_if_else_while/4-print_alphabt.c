#include <stdio.h>

/**
 * main - Entry point for program
 *
 * Description: print the entire alphabet except q and e
 *
 * Return: Always 0 (Success) and the alphabet
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}

	putchar('\n');

	return (0);
}
