/*
** EPITECH PROJECT, 2024
** my.h
** File description:
** my.h BOOTCAMP
*/
#include <stddef.h>

#ifndef MY_H_
    #define MY_H_

typedef struct node_s {
    char *key;
    void *value;
    struct node_s *next;
} node_t;

#endif /* !MY_H_ */
