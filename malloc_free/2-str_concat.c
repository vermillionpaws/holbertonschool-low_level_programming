#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
* Return: pointer to newly allocated space in memory
*/

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, lenA, lenB = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		lenA++;
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		lenB++;
	}

	str = malloc(sizeof(char)
	      * (lenA + lenB + 1));

	for (i = 0; i < lenA; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < lenB; j++)
	{
		str[i] = s2[j];
		i++;
	}

	return (str);
}

