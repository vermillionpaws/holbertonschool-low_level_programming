#include <stdio.h>

void *_memcpy(void *dest, const void *src, size_t n)
{
	char *d = dest;
	const char *s = src;
	while (1) {
		*d = *s;
		if (!n) break;
		d++;
		s++;
		n--;
	}

	return (dest);
}
