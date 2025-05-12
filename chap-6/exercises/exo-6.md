# Translating program fragment

- The translation to a loop :

```C
    i = 1;
    
    for (i = 1; i <= 128; i *= 2) {
        printf("%d ", i);
    }
```