#ifndef FUNCTIONS
#define FUNCTIONS
#include <stddef.h>
/**
 * struct listt - main entry
 * @str: isa varaible
 * @len: is a length
 * @next: is a pointer to next
 */
typedef struct listt
{
char *str;
int len;
struct listt *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
