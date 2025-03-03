#include <stdio.h>

/**
* _memset - fills memory with a constant byte
* @s: memory area to be filled
* @c: constant byte
* @n: number of bytes to be filled
*
* Return: pointer to the memory area s
*/

void *_memset(void *s, int c, size_t n)
{
	unsigned char *p = s;

	while (n--)
	{
		*p++ = c;
	}

	return (s);
}
