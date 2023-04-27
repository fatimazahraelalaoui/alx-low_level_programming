#include "main.h"

/**
 * _abs - The absolute value of an integer
 * @c: The num to be computed
 * Return: Absolute value of the num or zero
 */

int _abs(int c)

{
	int abs_val;

	if (c < 0)

	{ 
        abs_val = c * -1;
	return (abs_val);
	}

	return (c);
}
