/*
** EPITECH PROJECT, 2025
** Delete Hash
** File description:
** Delete Hash for Secured
*/

#include "hashtable.h"
#include "my.h"

#include "hashtable.h"
#include "lib.h"

void delete_hashtable(hashtable_t *ht)
{
    node_t *actual = NULL;
    node_t *next = NULL;

    if (ht == NULL || ht->number == NULL)
        return;
    for (int i = 0; i < ht->size; i++) {
        actual = ht->number[i];
        while (actual != NULL) {
            next = actual->next;
            free(actual->key);
            free(actual->value);
            free(actual);
            actual = next;
        }
    }
    free(ht->number);
    free(ht);
}
