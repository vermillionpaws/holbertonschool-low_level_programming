#include <stdio.h>

/**
* _memcpy - copies n bytes from memory area src to memory area dest
* @dest: memory area to copy to
* @src: memory area to copy from
* @n: number of bytes to copy
* Return: pointer to dest
*/

void *_memcpy(void *dest, const void *src, size_t n)
{
	char *d = dest;

	const char *s = src;

	while (1)
	{
		if (n == 0)
		{
			break;
		}
		*d = *s;
		d++;
		s++;
		n--;
	}

	return (dest);
}
