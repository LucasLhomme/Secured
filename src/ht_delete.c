/*
** EPITECH PROJECT, 2025
** delete hashtable
** File description:
** Delete Hashtable
*/
#include "hashtable.h"

int ht_delete(hashtable_t *ht, char *key)
{
    int index = ht->hash(key, ht->size) % ht->size;
    node_t *current = ht->number[index];
    node_t *previous = NULL;

    while (current != NULL) {
        delete_node(current, previous, ht, key, index);
        previous = current;
        current = current->next;
    }
    return 84;
}

int delete_node(node_t *current, node_t *previous, hashtable_t *ht, char *key, int index)
{
    if (my_strncmp(current->key, key) == 0) {
        if (previous == NULL) {
            ht->number[index] = current->next;
        } else {
            previous->next = current->next;
        }
        free(current->key);
        free(current->value);
        free(current);
        return 0;
    }
}
