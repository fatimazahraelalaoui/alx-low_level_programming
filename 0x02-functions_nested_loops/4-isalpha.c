#include "main.h"

/**
 * _isalpha - Checks for alphabetic caracter
 * @c: The caracter checked
 * Return: 1 for a letter lowercase or uppercase and 0 for otherwise 
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))

	{
		return (1);
	}
	return (0);
}

