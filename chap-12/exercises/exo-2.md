# About the illegal statement

1. Why : It is illegal because pointer arithmetic doesn't support addition and division between pointers

2. Possible fix / workaround :

- computing first the distance between the 2 pointers (thus the arrays elements indexes)
- adding the result of the half of this computation to low pointer

```c
int half = high - low / 2;
middle = low + half
```
