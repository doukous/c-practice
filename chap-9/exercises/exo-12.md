# Writing the function

Here is the function :

```C
double inner_product(double a[], double b[], int n)
{
    double inner_product = 0;

    for (int i = 0; i < n; i++)
    {
        inner_product += a[i] * b[i];
    }

    return inner_product;
}
```

