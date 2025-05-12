# Rewriting the loop

- The loop

```C
for (n = 0; m > 0; n++)
    m /= 2;
```

- The rewritten loop

```C
for (n = 0, m /= 2; m > 0; n++, m/=2);
```