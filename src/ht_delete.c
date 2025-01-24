/*
** EPITECH PROJECT, 2025
** delete hashtable
** File description:
** Delete Hashtable
*/
#include "hashtable.h"
#include "lib.h"

int delete_node(node_t *current, node_t *previous, hashtable_t *ht, char *key)
{
    int index = ht->hash(key, ht->size) % ht->size;

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
    return 0;
}

int ht_delete(hashtable_t *ht, char *key)
{
    int index = 0;
    node_t *current;
    node_t *previous;

    if (ht == NULL || ht->hash == NULL || current == NULL || previous == NULL)
            return 84;
    index = ht->hash(key, ht->size) % ht->size;
    current = ht->number[index];
    previous = NULL;
    while (current != NULL) {
        delete_node(current, previous, ht, key);
        previous = current;
        current = current->next;
    }
    return 0;
}
