#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */

/* Function to delete a sorted hash table */
void shash_table_delete(shash_table_t *ht) {
    unsigned long int i;
    shash_node_t *node;
    shash_node_t *tmp;

    for (i = 0; i < ht->size; i++) {
        node = ht->array[i];
        while (node) {
            tmp = node;
            node = node->next;
            free(tmp->key);
            free(tmp->value);
            free(tmp);
        }
    }
    free(ht->array);
    free(ht);
}

int main(void)
{
	shash_table_t *ht;

	ht = shash_table_create(1024);
	shash_table_set(ht, "y", "0");
	shash_table_print(ht);
	shash_table_set(ht, "j", "1");
	shash_table_print(ht);
	shash_table_set(ht, "c", "2");
	shash_table_print(ht);
	shash_table_set(ht, "b", "3");
	shash_table_print(ht);
	shash_table_set(ht, "z", "4");
	shash_table_print(ht);
	shash_table_set(ht, "n", "5");
	shash_table_print(ht);
	shash_table_set(ht, "a", "6");
	shash_table_print(ht);
	shash_table_set(ht, "m", "7");
	shash_table_print(ht);
	shash_table_print_rev(ht);
	shash_table_delete(ht);
	return (EXIT_SUCCESS);
}

