#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print triple digit combos
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k;

	i = 48;
	j = 48;
	k = 48;

	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			k = j + 1;
			while (k < 58)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i < 56 || j < 57 || k < 58)
				{
					putchar(44);
					putchar(32);
				}
				k ++;
			}
			j ++;
		}
		i ++;
	}

	return (0);
}
