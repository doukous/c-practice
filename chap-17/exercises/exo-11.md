# Function that return the number of occurences

Here is the function :

```C
#include <stdlib.h>

int count_occurences(struct node *list, int n) {
    struct node *curr = list;
    int count = 0;

    if (curr == NULL) return count;

   for (; curr->next != NULL; curr = curr->next)
       if (curr->value == n)
           count++;

   return count;
}
```
