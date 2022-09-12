#include <stdio.h>
/**
 * main - print numbers from 00 to 99.
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';
	int j = '0';
	int k = '0';

	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				if (i < j && j < k)
				{
					putchar(i), (j), (k);
		                        
					if (!(i == '7' && j == '8' && k == '9'))
					{
						putchar(','), (' ');
					}
				}
				k++;
			}
			k = '0';
			j++;
		}
		j = '0';
		i++;
	}
	putchar('\n');
	return (0);
}
