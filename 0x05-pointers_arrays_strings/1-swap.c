#include "main.h"

/**
 * swap_int 
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
