#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: string to copy
* Return: pointer to the duplicated string
*/

char *_strdup(char *str)
{
	char *dup;
	unsigned int size = 0;

	if (str)
	{
		while (str[size++] != '\0')
	 	{
			;
		}

		dup = malloc(sizeof(char) * size);
		if (dup)
		{
			while (size--)
			{
				dup[size] = str[size];
			}
			return (dup);
		}
	}

	return (NULL);
}
