# The rewritten expression

```c
int sum_array(const int *a, int n)
{
    const int *i, sum;
    sum = 0;
    for (i = a; i < a + n; i++)
    sum += *i;
    return sum;
}
```