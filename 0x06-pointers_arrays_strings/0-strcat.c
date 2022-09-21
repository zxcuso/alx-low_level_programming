#include "main.h"

/**
 * _streat - concatenate the string 
 * the end of the string pointed
 * @dest: string that will
 * @src: string to be concatenated
 *
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}

