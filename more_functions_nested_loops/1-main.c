#include <stdio.h>
#include "main.h"

/**
* main - entry point
* @c: the digit to be checked
* Return: return a digit
*/

int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
