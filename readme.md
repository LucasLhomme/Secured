# Subject: Secured

## Description

This project involves creating a hash table library in C. The goal is to implement a custom hash function, handle hash table operations, and ensure efficient data storage and retrieval.

## Installation and Prerequisites

Before you begin, ensure you have the following installed:

- A C compiler (e.g., `gcc`)
- `make`

To compile the project, run:
```sh
make
```

How to run:

```sh
make && ./your_executable
```

## Objective

Create a static library libhashtable.a that includes the following functions:

```sh
int hash(char *key, int len);
hashtable_t *new_hashtable(int (*hash)(char *, int), int len);
void delete_hashtable(hashtable_t *ht);
int ht_insert(hashtable_t *ht, char *key, char *value);
int ht_delete(hashtable_t *ht, char *key);
char *ht_search(hashtable_t *ht, char *key);
void ht_dump(hashtable_t *ht);
```

## Authors

- [@LucasLhomme](https://github.com/LucasLhomme)
- [@jawedlahrouri](https://github.com/jawedlahrouri)
