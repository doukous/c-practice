# Writing the num_digits function


Here is the function :

```C
int num_digits(int n)
{
    int digits_number = 0;

    while (n > 0)
    {
        n /= 10;
        digits_number++;
    }

    return digits_number;
}
```