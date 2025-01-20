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
    node_t *act = *((hashtable_t **)ht);
    int len = my_strlen(key);
    char *str = hash(key, len);

    if (act == NULL)
        return 84;
    for (int i = 0; act != NULL; i++) {
        if (my_strcmp(str, act->key) == 0) {
            my_printf("%s est à l'emplacement %d", act->key, act->value);
            return act->value;
        }
        act = act->next;
    }
    return 84;
}
