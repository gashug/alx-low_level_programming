#include <stdio.h>

/**
 * main - Entry Point
 *
 * Desription:
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k, l;

	i = 48;
	j = 48;
	k = 48;
	l = 48;

	while (i < 58)
	{
		while (j < 58)
		{
			putchar(i);
			putchar(j);
			putchar(32);

			while (k < 58)
			{
				l = k + 1;
				while (l < 58)
				{
					putchar(k);
					putchar(l);
					if (k < 58 || j < 58)
					{
						putchar(44);
						putchar(32);
					}
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}

	putchar(10);

	return (0);
}
