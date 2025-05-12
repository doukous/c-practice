# Optimizing the code fragment

- The code fragment :

```C
    for (d = 2; d < n; d++)
        if (n % d == 0)
            break;
```

- Proposed optimization :

```C
    for (d = 2; d * d <= n; d++)
        if (n % d == 0)
            break;
```