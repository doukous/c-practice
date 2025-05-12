# Output of the program fragment

```C
    sum = 0;

    for (i = 0; i < 10; i++) {
        if (i % 2)
            continue;
        sum += i;
    }

    printf("%d\n", sum);
```

- output : "25 \n", it's the sum of odd numbers that are less than 10