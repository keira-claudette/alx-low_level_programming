#ifndef SEARCH_ALGOAS
#define SEARH_ALGOS

int recursive_search(int *array, int value, size_t l, size_t r);
void print_search(int *array, unsigned int l, size_t size);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
/*listint_t *jump_list(listint_t *list, size_t size, int value);
  skiplist_t *linear_skip(skiplist_t *list, int value);*/

#endif
