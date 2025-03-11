#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: string to copy
* Return: pointer to the duplicated string
*/

char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		len++;
	}

	dup = malloc(sizeof(char) * (len + 1));

	return (dup);
}
