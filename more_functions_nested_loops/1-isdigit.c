#include "main.h"

/**
* _isdigit - entry point
* @digit: digit parameter
* Return: return 1 if its a digit, 0 otherwise
*/

int _isdigit(int digit)
{
	return ((digit > 47 && digit < 58) ? 1 : 0);
}
