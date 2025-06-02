# Functions

Assuming a and n are the parameters, where a is an array of int values and n is the length of the array.

- a. The largest element in a :

```C
int length(int[] a, int n)
{
    int largest = a[0];

    for (int i = 1; i < n; i++)
        if (a[i] > largest)
            largest = a[i];

    return largest;
}
```

- b. The average of all elements in a :

```C
float average(int[] a, int n)
{
    float average = 0f;

    for (int i = 0; i < n; i++)
        average += a[i];
    
    average /= n;

    return average;
}
```

- c. The number of positive elements in a :

```C
int positive_amount(int a[], int n)
{
    int number = 0;

    for (int i = 0; i < n; i++)
        if (a[i] > 0)
            number++;

    return number;
}
```