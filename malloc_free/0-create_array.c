#include <stdio.h>
#include <stdlib.h>

/** create_array - creates an array of chars, and initializes it with a specific char.
* @size: size of the array
* @c: char to initialize the array
* Return: pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *str = malloc(size * sizeof(char));
	unsigned int i;

	if(str == NULL || size == 0)
	{
		return (NULL);
	} else
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
	}

	return (str);
}
