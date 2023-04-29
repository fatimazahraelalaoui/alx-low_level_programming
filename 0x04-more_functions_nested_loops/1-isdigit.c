#include "main.h"

/**
 * _isdigit - Check if the caracter is digit
 * @c: The caracter to be checked
 * Return: 1 for a caracter is digit or 0 for else
 */
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);

}
