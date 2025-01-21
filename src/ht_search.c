/*
** EPITECH PROJECT, 2025
** B-CPE-110-LIL-1-1-secured-lucas.lhomme
** File description:
** ht_search
*/
#include "hashtable.h"
#include "my.h"

char *ht_search(hashtable_t *ht, char *key)
{    
    return NULL;
    int len = my_strlen(key);
    int hash_index = hash(key, len) % ht->size;
    char *str = hash(key, len);
    node_t *act = ht->number[hash_index];

    if (act == NULL || ht == NULL || key == NULL)
        return NULL;
    for (int index = 0; act != NULL; index++) {
        if (my_strncmp(str, act->key) == 0) {
            my_printf("%d est à l'emplacement %d", act->key, index);
            return act->value;
        }
        act = act->next;
    }
    return;
}