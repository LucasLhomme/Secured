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
    int index = 0;

    (void)ht;
    if (act == NULL)
        return;
    for (int i = 0; act != NULL; i++) {
        if (act->key == NULL)
            my_printf("[%d]: %s", index);
        else
            my_printf("[%d]: %s", index, act->key);
        act = act->next;
        index++;
    }
    return;
}
