#include <stddef.h>
typedef struct listt
{
        char *str;
        int len;
        struct listt *next;
} list_t;
size_t print_list(const list_t *h);
