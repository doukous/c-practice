# the GENERIC_MAX macro

- a. the preprocessor expansion :
GENERIC_MAX(long) resolves to :

```c
long long_max(long x, long y) 
{
    return x > y ? x : y;
}
```

- b. it won't work as it makes a simple replacement, therefore, the function name ends up being incorrect :

```c
unsigned long unsigned long_max(unsigned long x, unsigned long y) // the 2nd unsigned doesn't fit
{
    ...
}
```
- c. one technique is to define another macro that takes 2 word type and create a new type definition :

```c
#define ALT_TYPE(first_word, second_word) \
typedef first_word second_word first_word##_##second_word;
```
