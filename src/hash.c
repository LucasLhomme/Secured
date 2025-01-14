/*
** EPITECH PROJECT, 2025
** B-CPE-110-LIL-1-1-secured-lucas.lhomme
** File description:
** hash
*/
#include <stdio.h>
int hash(char *key, int len)
{
    int hash = 0;
    int bits;
    int n = 10;

    for (int i = 0; key[i] != '\0'; i++){
        bits = key[i];
        hash += ((hash << 5) + bits) * (bits + n);
        printf("emplacement : %i, lettre : %c, hash: %i\n", i, key[i], hash);
    }
    hash = hash > 0 ? hash : - hash;
    return hash;
}
