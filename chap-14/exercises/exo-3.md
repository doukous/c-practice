# the DOUBLE macro

- a. the value is 4 as it is evaluated as follow : 2*1 + 2
- b. the value is 4 as it is evaluated as follow : 4 / 2 * 2 
- c. the fix :

```c
#define DOUBLE(x) (2*(x))
```
