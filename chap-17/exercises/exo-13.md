# The returning function

- The issue : the conditional statement of while loop assumes that the cur value effectively points to a node struct tag but it might not be the case if the cur variable points to NULL pointer. In such case, its value attribute will not be defined and it may make the program crash.

- The fix : checking if the cur node isn't NULL as below

```C
struct node *insert_into_ordered_list(struct node *list, struct node *new_node) 
{
struct node *cur = list, *prev = NULL;

while(cur != NULL && cur->value <= new_node->value) {
    prev = cur;
    cur = cur->next;
}

// case of an empty list
if (prev == NULL) {
    list = new_node;
    new_node->next = cur;
    return list;
}
    
prev->next = new_node;
new_node->next = cur;
return list;
}
```
