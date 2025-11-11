# Rewrite of the function

```C
int *find_largest(int a[], int n)
{
    static int *max_index;
    int max = 0;

    for (int *i = a; i <a + n; i++)
    {
        if (i > max)
        {
            max = *i;
            max_index = i;
        }
    }

    return max_index;
}
```