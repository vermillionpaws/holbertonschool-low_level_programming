#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *str = malloc(size * sizeof(char));
	unsigned int i;
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
