# 🔒 Secured — High-Performance Hash Table Library in C

[![Language: C](https://img.shields.io/badge/Language-C-00599C.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Build: Make](https://img.shields.io/badge/Build-Makefile-orange.svg)](Makefile)
[![Module: B-CPE-110](https://img.shields.io/badge/Epitech-B--CPE--110-blue.svg)](https://www.epitech.eu/)
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)

> **Secured is a robust, modular Hash Table library implemented in pure C**, developed as part of Epitech's elementary programming curriculum.

---

## 🎯 Overview

The goal of **Secured** is to design and implement an in-memory associative key-value storage engine using an efficient hashing algorithm and collision resolution strategy, providing near $O(1)$ amortized time complexity for insertions, lookups, and deletions.

### Academic Context
- **Institution:** Epitech (First Year)
- **Module:** B-CPE-110 — Elementary Programming
- **Deliverable:** Static library archive `libhashtable.a`

---

## ⚙️ Technical Specifications

### 1. Dynamic Hash Function
The library implements a deterministic hash algorithm mapping arbitrary null-terminated strings (`char *`) into positive integer indices bounded by the table capacity:
- Distributes keys uniformly across buckets to minimize clustering.
- Employs bit-shift operations, prime multipliers, and XOR mixing to scramble input entropy.

### 2. Collision Handling via Separate Chaining
- Buckets are represented as an array of linked list nodes.
- When two distinct keys hash to the same bucket index, the new entry is prepended to the bucket's collision chain.
- Lookups and deletions traverse only the targeted bucket's list, ensuring minimal overhead even under high load factors.

### 3. Complete CRUD Interface
- `new_hashtable(int (*hash)(char *, int), int len)`: Allocates and initializes a new hash table with `len` buckets and the specified hash function pointer.
- `delete_hashtable(hashtable_t *ht)`: Frees all allocated memory (buckets, nodes, duplicated keys and values).
- `ht_insert(hashtable_t *ht, char *key, char *value)`: Inserts a key-value pair or updates existing key.
- `ht_delete(hashtable_t *ht, char *key)`: Removes the specified key from its collision bucket.
- `ht_search(hashtable_t *ht, char *key)`: Returns the value string associated with `key`, or `NULL` if not found.
- `ht_dump(hashtable_t *ht)`: Prints the internal state, showing bucket indices and chained entries.

---

## 🛠️ Build & Integration

```bash
# Compile static library
make

# Result: libhashtable.a
```

### Integration Example
```c
#include "hashtable.h"
#include <stdio.h>

int main(void)
{
    hashtable_t *ht = new_hashtable(hash, 4);

    ht_insert(ht, "Vision", "./Documents/Vision");
    ht_insert(ht, "Khaos", "./Trash/Khaos");

    printf("Lookup: %s\n", ht_search(ht, "Vision"));
    ht_dump(ht);

    delete_hashtable(ht);
    return 0;
}
```

---

## 📜 License

Licensed under the **MIT License with attribution** to Lucas Lhomme (Crabe).
