/*
** EPITECH PROJECT, 2025
** ht dump
** File description:
** display the hashtable
*/
#include "hashtable.h"
#include "my.h"
#include <stdio.h>

void ht_dump(hashtable_t *ht)
{
    node_t *act = *((node_t **)ht);

    (void)ht;
    if (act == NULL)
        return 84;
    for (int i = 0; act != NULL; i++) {
        if (act->key == NULL)
            my_printf("[%d]: %s", act->value);
        else
            my_printf("[%d]: %s", act->value, act->key);
        act = act->next;
    }
    return;
}
