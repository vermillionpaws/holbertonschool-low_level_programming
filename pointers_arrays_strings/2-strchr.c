#include "main.h"

/**
* _strchr - locates a character in a string
* @s: string to search
* @c: character to search for
* Return: pointer to first occurrence of c in s
*/

void *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
