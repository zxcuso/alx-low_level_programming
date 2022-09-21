#include "main.h"
#include "stdio.h"

/**
 * _strncpy - c function
 * terminating null type
 * if the lenght
 * the reminder
 * works identically 
 * @dest: buffer
 * @src: the source
 * @n: number of 
 * Return: return
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] - src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
