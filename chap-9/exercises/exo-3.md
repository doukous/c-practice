# Writing the function

- Here is the function :


```C
int gcd(int m, int n)
{
    int greatest = m >= n ? m : n;
    int lowest = m <= n ? m : n;

    while (lowest != 0)
    {
        remainder = greatest % lowest;
        greatest = lowest;
        lowest = remainder;
    }

    return greatest;
}
```