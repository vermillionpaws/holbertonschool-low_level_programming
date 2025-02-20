#include <stdio.h>
#include "main.h"

/**
 * main - Entry point for program
 *
 * Description: print "_putchar"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char txt[10] = "_putchar\n";
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(txt[n]);
	}

	return (0);
}
