/*
** EPITECH PROJECT, 2024
** main
** File description:
** main bootcamp
*/
#include "hashtable.h"
#include "lib.h"
#include "my.h"

hashtable_t *new_hashtable(int (*hash)(char *, int), int len)
{
    hashtable_t *h_table = malloc(sizeof(hashtable_t));

    if (h_table == NULL || len <= 0 || hash == NULL)
        return NULL;
    h_table->number = malloc(sizeof(node_t *) * len);
    if (h_table->number == NULL){
        free(h_table);
        return NULL;
    }
    printf("len = %d\n", len);
    for (int i = 0; i < len; i++){
        h_table->number[i] = NULL;
        printf("[%i]\n", i);
    }
    h_table->size = len;
    h_table->hash = hash;
    return h_table;
}
