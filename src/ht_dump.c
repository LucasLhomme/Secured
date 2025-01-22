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

#include "hashtable.h"
#include "my.h"
#include <stdio.h>

void ht_dump(hashtable_t *ht)
{
    node_t *act;

    if (ht == NULL || ht->number == NULL)
        return;
    for (int i = 0; i < ht->size; i++) {
        act = ht->number[i];
        if (act == NULL)
            my_printf("[%d]:\n", i);
        else
            my_printf("[%d]: %s\n", i, act->key);
    }
}
