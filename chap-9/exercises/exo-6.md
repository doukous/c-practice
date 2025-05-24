# The digit function


Here is the function :

```C
int digit(int n, int k)
{
    for (int i = 0; i < k - 1; i++)
        n /= 10;
    
    return n % 10;
}
```