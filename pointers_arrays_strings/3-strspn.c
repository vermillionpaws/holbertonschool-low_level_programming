#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @str: string to check
 * @accept: string to check against
 * Return: number of bytes in the initial segment of @str
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s) 
	{
		for (count = 0; accept[count]; count++)
		{
			if (*s == accept[count])
			{
				break;
			}
		}
		if (!accept[count])
		{
			break;
		}
		s++;
	}
	return (count);
}
