#include "main.h"

/**
* _isdigit - entry point
* @c: the digit to be checked
* Return: return a digit
*/

int _isdigit(int digit)
{
	return ((digit > 47 && digit < 58) ? 1 : 0);
}
