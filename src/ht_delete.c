/*
** EPITECH PROJECT, 2025
** delete hashtable
** File description:
** Delete Hashtable
*/
#include "hashtable.h"
#include "my.h"
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
}

int ht_delete(hashtable_t *ht, char *key)
{
    int index = ht->hash(key, ht->size) % ht->size;
    node_t *current = ht->number[index];
    node_t *previous = NULL;

    while (current != NULL) {
        delete_node(current, previous, ht, key);
        previous = current;
        current = current->next;
    }
    return 0;
}
