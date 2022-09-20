#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: string
 * Return: returns lenght as integer
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; ++s) 
		++counter;

	return (counter);
}
