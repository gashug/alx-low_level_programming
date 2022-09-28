#include "main.h"
/**
 * _strlen_recursion - finds the length of a string.
 * @s: pointer to string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int n = 1;
	
	if (*s == '\0')
		return (0);
	if (*s != '\0')
		n = n + _strlen_recursion(s + 1);
	return (n);
}
