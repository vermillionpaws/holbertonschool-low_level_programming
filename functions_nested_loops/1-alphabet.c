#include <stdio.h>
#include "main.h"

/*
*	Program: Print alphabet
*
*	Return: Return entire alphabet if successful.
*/

void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
