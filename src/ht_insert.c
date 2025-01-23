/*
** EPITECH PROJECT, 2025
** ht insert
** File description:
** insert in the hash table
*/
#include "hashtable.h"
#include "my.h"
#include "lib.h"

int error_hand(hashtable_t *ht, char *key, char *value)
{
    if (ht == NULL || ht->number == NULL || key == NULL
    || value == NULL)
        return 84;
    return 0;
}

node_t *create_new_node(char *key, char *value)
{
    node_t *new_node = malloc(sizeof(node_t));
    if (new_node == NULL)
        return NULL;
    new_node->key = my_strdup(key);
    new_node->value = my_strdup(value);
    new_node->next = NULL;
    if (new_node->key == NULL || new_node->value == NULL) {
        free(new_node->key);
        free(new_node->value);
        free(new_node);
        return NULL;
    }
    return new_node;
}

void insert_node(hashtable_t *ht, node_t *new_node, int index)
{
    node_t *current = ht->number[index];
    if (current == NULL) {
        ht->number[index] = new_node;
    } else {
        while (current->next != NULL)
            current = current->next;
        current->next = new_node;
    }
}

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    int index;
    node_t *new_node = create_new_node(key, value);

    if (new_node == NULL)
        return 84;
    if (error_hand(ht, key, value) == 84)
        return 84;
    index = ht->hash(key, ht->size);
    index = index % ht->size;
    if (new_node == NULL)
        return 84;
    insert_node(ht, new_node, index);
    return 0;
}
