#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to reverse
 * Return: nothing
 */

void print_rev(char *s)
{
	int len = strlen(s);

	/*finds the length of string without null character*/
	while (len--)
		putchar(*(s + len));
	putchar(10);
}
