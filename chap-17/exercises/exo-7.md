# Wrong linked list pointer

- The issue : the issue is that it is trying to access a the object of a deleted pointer (a dangling pointer).

- A solution : add another variable pointer that point to the next pointer before deleting the current one.
