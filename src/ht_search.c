/*
** EPITECH PROJECT, 2025
** B-CPE-110-LIL-1-1-secured-lucas.lhomme
** File description:
** ht_search
*/
#include "hashtable.h"
#include "my.h"
#include "lib.h"

char *ht_search(hashtable_t *ht, char *key)
{
    int hash_index = hash(key, ht->size) % ht->size;
    node_t *act = ht->number[hash_index];

    if (act == NULL || ht == NULL || key == NULL)
        return NULL;
    while (act != NULL) {
        if (my_strncmp(key, act->key) == 0) {
            return act->value;
        }
        act = act->next;
    }
    return NULL;
}
