/*
** EPITECH PROJECT, 2025
** ht dump
** File description:
** display the hashtable
*/

#include "hashtable.h"
#include "my.h"
#include "lib.h"
#include <stdio.h>


void print_list(node_t *act, int i)
{
    if (act == NULL) {
        my_printf("[%d]:\n", i);
        return;
    }
    my_printf("[%d]:", i);
    while (act != NULL) {
        my_printf("\n> %d - %s", act->value, (char *)act->value);
        act = act->next;
    }
    my_printf("\n");
}

void ht_dump(hashtable_t *ht)
{
    if (ht == NULL || ht->number == NULL)
        return;
    for (int i = 0; i < ht->size; i++)
        print_list(ht->number[i], i);
}
