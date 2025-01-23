/*
** EPITECH PROJECT, 2025
** ht insert
** File description:
** insert in the hash table
*/
#include "hashtable.h"
#include "my.h"
#include "lib.h"

int error_hand(hashtable_t *ht, char *key, char *value, node_t *new_node)
{
    if (ht == NULL || ht->number == NULL || key == NULL
    || value == NULL)
        return 84;
    return 0;
}

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    int index = ht->hash(key, ht->size);
    node_t *new_node = malloc(sizeof(node_t));
    node_t *current;

    if (new_node == NULL || current == NULL)
        return 84;
    if (error_hand(ht, key, value, new_node) == 84) {
        free(new_node);
        return 84;
    }
    index = index % ht->size;
    new_node->key = my_strdup(key);
    new_node->value = my_strdup(value);
    new_node->next = NULL;
    if (ht->number[index] == NULL) {
        ht->number[index] = new_node;
    } else {
        current = ht->number[index];
        while (current->next != NULL)
            current = current->next;
        current->next = new_node;
    }
    return 0;
}
