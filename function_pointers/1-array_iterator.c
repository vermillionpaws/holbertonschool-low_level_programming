#include "function_pointers.h"
#include <stdio.h>

/**
*	array_iterator - entry point for array iteration
*	@array: Array
*	@size: Size of array
*	@action: Action
*	Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	while (size--)
	{
		action(*array++);
	}
}
