#include "function_pointers.h"
#include <stdlib.h>

/**
 *	int_index - searches for an integer
 *	@array: array of integers
 *	@size: size of the array
 *	@cmp: pointer to the function to be used to compare values
 *	Return: index of the first element for which cmp function does not
 *return 0
 */

int int_index(int *array, int size, int (*cmp)(int)) 
{
	int i = 0;

	if (!arr || size <= 0 || !cmp)
		return (-1);
	for (; i < size; i++)
	{
		if (cmp(arr[i]) > 0)
			return (i);
	}
	return (-1);
}
