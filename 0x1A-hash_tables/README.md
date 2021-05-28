## C - Hash Tables

- ##### 0-hash_table_create.c
  A function that creates a hash table.<br>
  prototype:
  `hash_table_t *hash_table_create(unsigned long int size);`

- ##### 1-djb2.c
  A hash function implementing the djb2 algorithm.

- ##### 2-key_index.c
  A function that gives you the index of a key.<br>
  Prototype:
  `unsigned long int key_index(const unsigned char *key, unsigned long int size);`

- ##### 3-hash_table_set.c
  A function that adds an element to the hash table. <br>
  Prototype:
   `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`

- ##### 4-hash_table_get.c
  A function that retrieves a value associated with a key.<br>
  Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key);`

- ##### 5-hash_table_print.c
  A function that prints a hash table.<br>
  Prototype: `void hash_table_print(const hash_table_t *ht);`
  	     - where ht is the hash table

- ##### 6-hash_table_delete.c
  A function that deletes a hash table.<br>
  Prototype: `void hash_table_delete(hash_table_t *ht);`
  - where ht is the hash table
