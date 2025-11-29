# the parametrized macros

Here are the parametrized macros and an example of execution :

```c
#include <stdio.h>

#define CUBE(x) ((x) * (x) * (x))
#define REMAINDER(n) ((n) % 4)
#define ARE_LESS(x, y) ((x) * (y) < 100)

int main(void) {
    printf("result of cube(x) : %.2f\n", CUBE(3.17));
    printf("result of remainder : %d\n", REMAINDER(15));
    printf("result of evaluation : %d\n", ARE_LESS(120, 15));
}
```

# do the macros always work ?

no, they don't. they may fail if non number values are passed as arguments such as strings or arrays. characters may works as they can be seen as integers.
