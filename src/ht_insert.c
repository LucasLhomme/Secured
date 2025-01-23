/*
** EPITECH PROJECT, 2025
** ht insert
** File description:
** insert in the hash table
*/
#include "hashtable.h"
#include "my.h"
#include "lib.h"

int error_hand(hashtable_t *ht, char *key, char *value, int index)
{
    if (ht == NULL || ht->number == NULL || key == NULL
    || value == NULL || index == 0)
        return 84;
    return 0;
}

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    int index = 0;
    node_t *new_node = malloc(sizeof(node_t));
    node_t *current = NULL;

    if (error_hand(ht, key, value, index) == 84)
        return 84;
    index = ht->hash(key, ht->size);
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
