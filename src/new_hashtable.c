/*
** EPITECH PROJECT, 2024
** main
** File description:
** main bootcamp
*/
#include "hashtable.h"
#include "lib.h"


hashtable_t *create_address(const char *name, const char *phone_number)
{
    hashtable_t *entry = malloc(sizeof(hashtable_t));

    entry->name = my_strdup(name);
    entry->phone_number = my_strdup(phone_number);
    if (entry == NULL)
        return NULL;
    return entry;
}

hashtable_t **create_address_book(int len)
{
    hashtable_t **address_book = malloc(len * sizeof(hashtable_t *));

    if (address_book == NULL)
        return NULL;
    for (int i = 0; i < len; i++)
        address_book[i] = NULL;
    printf("adresse book created with len %d\n", len);
    return address_book;
}

void add_address
(hashtable_t **address_book, int len, const char *name
, const char *phone_number)
{
    hashtable_t *adresse = malloc(sizeof(hashtable_t));

    if (!adresse)
        return;
    adresse->name = my_strdup(name);
    adresse->phone_number = my_strdup(phone_number);
    for (int i = 0; i < len; i++){
        if (address_book[i] == NULL){
            address_book[i] = adresse;
            my_printf("new adresse a l'emplacement %i\n", i);
            return;
        }
    }
    my_printf("il y a plus de place.\n");
}

void dummy_function(hashtable_t *address)
{
    write(1, address->name, strlen(address->name));
    write(1, "\n", 1);
}

void execute_on_address_book
(hashtable_t **address_book, int len, void(*execute)(hashtable_t *))
{
    for (int i = 0; i < len; i++) {
        if (address_book[i] == NULL) {
            continue;
        }
        if (my_strncmp(address_book[i]->phone_number, "+33 6", 5) != 0) {
            continue;
        }
        execute(address_book[i]);
    }
}
