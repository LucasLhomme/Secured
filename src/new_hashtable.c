/*
** EPITECH PROJECT, 2024
** main
** File description:
** main bootcamp
*/
#include "hashtable.h"
#include "lib.h"


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

void add_address(hashtable_t **address_book, int len, const char *hash)
{
    hashtable_t *new_table = malloc(sizeof(hashtable_t));

    if (new_table == NULL)
        return NULL;
    new_table->password = my_strdup(hash);
    for (int i = 0; i < len; i++){
        if (address_book[i] == NULL){
            address_book[i] = new_table;
            my_printf("new adresse at: %i\n", i);
            return;
        }
    }
    my_printf("There is no place anymore\n");
    return 84;
}
