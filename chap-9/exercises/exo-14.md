# Fixing the error

Here is the code :

```C
bool has_zero(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        if (a[i] == 0)
            return true;
    else
        return false; // the error line
}
```

- the error is that it terminates by returning false if the value is not zero instead of iterating throught the whole list.