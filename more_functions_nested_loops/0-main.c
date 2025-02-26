#include <stdio.h>
#include "main.h"

/**
* main - entry point for program
* this program should tell if a character is uppercase or not
* Return: return 0
*/

int main(void)
{
	char c;

	c = 'A';

	printf("%c: %d\n", c, _isupper(c));
	c = 'a';

	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
