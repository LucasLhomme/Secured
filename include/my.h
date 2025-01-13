/*
** EPITECH PROJECT, 2024
** my.h
** File description:
** my.h BOOTCAMP
*/
#include "hashtable.h"
#ifndef MY_H_
    #define MY_H_

hashtable_t *create_address(const char *name, const char *phone_number);
hashtable_t **create_address_book(int len);
void add_address(hashtable_t **address_book, int len, const char *name, const char *phone_number);
void dummy_function(hashtable_t *address);
void execute_on_address_book(hashtable_t **address_book, int len, void(*execute)(hashtable_t *));


#endif /* !MY_H_ */