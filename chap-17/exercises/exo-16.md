# The sum function

Here the function :

```C
int sum(int (*f)(int), int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) sum += f(i);
    return sum;
}
```
