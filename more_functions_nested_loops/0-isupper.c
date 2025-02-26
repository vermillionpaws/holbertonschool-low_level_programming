#include <stdio.h>
#include "main.h"

/**
* _isupper - entry point
* @c: the character to be checked
* Return: return a character
*/

int _isupper(int c)
{
	return ((c > 64 && c < 91) ? 1 : 0);
}
