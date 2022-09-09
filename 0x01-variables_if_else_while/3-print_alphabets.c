#include <stdio.h>

/**
 * main - Entry Point
 *
 * Desription:printing the alphabet in lowercase, and then in uppercase using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	return (0);
}
