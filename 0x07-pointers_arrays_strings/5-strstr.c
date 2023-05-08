#include "main.h"

/**
 * *_strstr - Entry point
 * @haystack : Input
 * @needle : Input
 * Rturn: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *p = haystack;
		char *l = needle;

		while (*l == *p && *l != '\0')
		{
			p++;
			l++;
		}
		if (*l == '\0')
			return (haystack);
	}
	return (0);
}
