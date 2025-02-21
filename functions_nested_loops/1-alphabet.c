#include <stdio.h>
#include "main.h"

/**
*	print_alphabet - Program entry
*	Description: Print entire alphabet
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
