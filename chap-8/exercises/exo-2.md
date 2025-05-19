# Use of character digits as subscript

We can use the same technique :

```C
char ch;
int digit_count[9];

digit_count[ch - '0']
```

But it's not portable for the reason already given in the Q&A section.