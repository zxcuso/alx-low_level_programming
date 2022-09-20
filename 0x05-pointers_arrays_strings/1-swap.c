#include "main.h"

/**
 * swap_int-swaps the values of two integers  
 * @a: first intetger
 * @b: second integer
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
