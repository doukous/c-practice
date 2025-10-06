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

- the error is that it terminates by only looking the first value.

- the way to fix it is to remove the else statement so that it will not be executed in the for statement:

    ```C
    bool has_zero(int a[], int n)
    {
        int i;

        for (i = 0; i < n; i++)
            if (a[i] == 0)
                return true;
        
        return false;
    }
    ```
