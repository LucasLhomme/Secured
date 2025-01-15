/*
** EPITECH PROJECT, 2024
** main
** File description:
** main bootcamp
*/
#include "hashtable.h"
#include "lib.h"
#include "my.h"


hashtable_t **create_hashtable_book(int (*hash)(char *, int), int len)
{
    hashtable_t **new_table = malloc(len * sizeof(hashtable_t *));

    if (new_table == NULL)
        return NULL;
    for (int i = 0; i < len; i++)
        new_table[i] = NULL;
    printf("adresse book created with len %d\n", len);
    return new_table;
}

hashtable_t *new_hashtable(int (*hash)(char *, int), int len)
{
    hashtable_t *new_table = malloc(sizeof(hashtable_t));

    if (new_table == NULL || len <= 0 || hash == NULL)
        return NULL;
    new_table->number = malloc(sizeof(node_t *) * len);
    if (new_table->number == NULL){
        free(new_table);
        return NULL;
    }
    for (int i = 0; i < len; i++){
        new_table->number[i] = NULL;
    }
    new_table->size = len;
    new_table->hash = hash;
    return new_table;
}
