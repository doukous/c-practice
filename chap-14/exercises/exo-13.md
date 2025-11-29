# program after preprocessing

- a. here what it looks like after preprocessing :

```c
void f(void);

int main(void)
{
    f();
    return 0;
}
void f(void)
{
    printf("N is undefined", 100);
}
```

 explanation : as the preprocessing only replace directives and do it in sequence from top to bottom, the undef directive is called before the conditional compilation directive #if defined(N) despite the function f is called before in main function.

- b. the output : prints => "N is undefined"
