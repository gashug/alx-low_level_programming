#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i;
	int result;

	if (!array || size == 0)
		return (-1);
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
		else
			printf("\n");
	}
	i = size / 2;
	if (array[i] == value)
	{
		if (size == 1 || array[i - 1] < value)
			return (i);
	}
	if (size == 1)
		return (-1);
	if (array[i] < value)
	{
		result = advanced_binary(array + i + 1, size - i - 1, value);
		if (result == -1)
			return (-1);
		return (i + 1 + result);
	}
	else
		return (advanced_binary(array, i, value));
	return (-1);
}
