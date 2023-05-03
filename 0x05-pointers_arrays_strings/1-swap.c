#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a : The first int to be swaped
 * @b : The second int to be swaped
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
