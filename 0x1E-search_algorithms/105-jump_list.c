#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Search for a value in a sorted singly linked list.
 * @list: Pointer to the head of the sorted list.
 * @size: Number of nodes in the list.
 * @value: The value to search for.
 * Return: pointer to first node where value is located, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, prev_idx;
	listint_t *prev, *current;

	if (!list || size == 0)
		return (NULL);

	jump = sqrt(size);
	prev = list;
	current = list;

	while (current && current->n < value)
	{
		prev = current;
		prev_idx = current->index;

		for (size_t i = 0; current->next && i < jump && current->n <
				value; i++)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	printf("Value found between indexes [%lu] and
			[%lu]\n", prev_idx, current->index);

	while (prev && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
