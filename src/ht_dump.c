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

    node_t *act = malloc(sizeof(node_t));

    (void)ht;
    act = ht->number[0];
    if (act == NULL)
        return;
    printf("Dumping hashtable\n");
    printf(act->key);
    for (int index = 0; act != NULL; index++) {
        if (act == NULL || act->key == NULL || act->value == NULL) {
            my_printf("[%d]:\n", index);
            printf("test\n");
        }
        else{
            printf("test2\n");
            my_printf("[%d]: %d\n", index, act->value);
            printf("test3\n");
        }
        act = act->next;
        printf("%s", act->key);
        printf("%d\n", index);
    }
    return;
}

