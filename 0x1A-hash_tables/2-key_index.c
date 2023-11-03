#include "hash_tables.h"

/**
 * key_index - Retrieves the index where a key/value
 * pair is stored within the hash table's array.
 * @key: The key used to compute the index.
 * @size: The size of the hash table's array.
 *
 * Return: The computed index for the given key.
 * Description: Utilizes the djb2 hashing algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
