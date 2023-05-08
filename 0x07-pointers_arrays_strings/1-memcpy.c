#include "main.h"

/**
 *  _memset - Entry point
 *  @dest : Input
 *  @src : Input
 *  @n : Input
 *  Return: Always 0
 */

char *_memset(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

		dest[i] = src[i];

	return (dest);
}
