/*
** EPITECH PROJECT, 2025
** ht insert
** File description:
** insert in the hash table
*/
#include "hashtable.h"
#include "my.h"
#include "lib.h"

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    int index = hash(key, ht->size);
    node_t *new_node = malloc(sizeof(node_t));

    if (ht == NULL || key == NULL || value == NULL)
        return 84;
    new_node->key = my_strdup(key);
    new_node->value = my_strdup(value);
    new_node->next = NULL;
    if (ht->number[index] == NULL) {
        ht->number[index] = new_node;
        my_printf("Insertion réussie : %s => %s à l'index %d\n", key, value, index);
    } else {
        node_t *current = ht->number[index];
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = new_node;
        printf("Collision gérée à l'index %d pour la clé '%s'\n", index, key);
    }
    return 0;
}

