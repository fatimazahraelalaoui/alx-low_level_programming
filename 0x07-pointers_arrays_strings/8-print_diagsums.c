#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a : Input
 * @size : Input
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int sum, sum1, i;

	sum = 0;
	sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		sum1 += a[i * size + (size - i - 1)];
	}
	printf("%d,%d\n", sum, sum1);
}
