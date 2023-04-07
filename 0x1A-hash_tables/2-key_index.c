#include "hash_tables.h"
  
/**
 * key_index - gives the index of a key
 *
 * @size: size of the array of hash table
 * @key: key to search index for
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
