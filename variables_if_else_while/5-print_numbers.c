#include <stdio.h>

/**
 * main - Entry point for program
 *
 * Description: Print numbers from 0 to 9 and then add a newline.
 *
 * Return: Always 0 (Success) and all numbers ranging from 0 to 9
 */

int main(void)
{
	int n = 0;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}

	printf("\n");

	return (0);
}
