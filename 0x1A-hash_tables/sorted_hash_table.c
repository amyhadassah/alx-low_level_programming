#include "hash_tables.h"

void shash_table_print(const shash_table_t *ht) {
    shash_node_t *node;
    char *comma = "";

    if (ht == NULL) {
        return;
    }

    printf("{");
    for (node = ht->shead; node != NULL; node = node->snext) {
        printf("%s'%s': '%s'", comma, node->key, node->value);
        comma = ", ";
    }
    printf("}\n");
}

void shash_table_print_rev(const shash_table_t *ht) {
    shash_node_t *node;
    char *comma = "";

    if (ht == NULL) {
        return;
    }

    printf("{");
    for (node = ht->stail; node != NULL; node = node->sprev) {
        printf("%s'%s': '%s'", comma, node->key, node->value);
        comma = ", ";
    }
    printf("}\n");
}


/* Function to create a sorted hash table */
shash_table_t *shash_table_create(unsigned long int size) {
    shash_table_t *table = malloc(sizeof(shash_table_t));
    if (!table) return NULL;

    table->size = size;
    table->array = calloc(size, sizeof(shash_node_t *));
    if (!table->array) {
        free(table);
        return NULL;
    }

    table->shead = NULL;
    table->stail = NULL;
    return table;
}

/* Function to set a key to a value in a sorted hash table */
int shash_table_set(shash_table_t *ht, const char *key, const char *value) {
    // This is a simplified version. You might need to handle collisions and actual sorting.
    unsigned long int index = key_index((const unsigned char *)key, ht->size);

    shash_node_t *new_node = malloc(sizeof(shash_node_t));
    if (!new_node) return 0;

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    // Sorting logic goes here. For now, just append at the end.
    if (!ht->shead && !ht->stail) {
        ht->shead = new_node;
        ht->stail = new_node;
        new_node->sprev = NULL;
        new_node->snext = NULL;
    } else {
        ht->stail->snext = new_node;
        new_node->sprev = ht->stail;
        ht->stail = new_node;
        new_node->snext = NULL;
    }
    return 1;
}

/* Function to get a value from a key in a sorted hash table */
char *shash_table_get(const shash_table_t *ht, const char *key) {
    unsigned long int index = key_index((const unsigned char *)key, ht->size);
    shash_node_t *node = ht->array[index];

    while (node) {
        if (strcmp(node->key, key) == 0) {
            return node->value;
        }
        node = node->next;
    }
    return NULL;
}

/* Function to print a sorted hash table */
void shash_table_print(const shash_table_t *ht) {
    shash_node_t *node = ht->shead;
    putchar('{');
    while (node) {
        printf("'%s': '%s'", node->key, node->value);
        node = node->snext;
        if (node) {
            printf(", ");
        }
    }
    puts("}");
}

/* Function to print a sorted hash table in reverse */
void shash_table_print_rev(const shash_table_t *ht) {
    shash_node_t *node = ht->stail;
    putchar('{');
    while (node) {
        printf("'%s': '%s'", node->key, node->value);
        node = node->sprev;
        if (node) {
            printf(", ");
        }
    }
    puts("}");
}

