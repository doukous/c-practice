# The look of  program after preprocessing

Here is the output after preprocessing :

```c
int main(void)
{
    int a[= 10], i, j, k, m; // compilation error for the illegal array length on variable a
    
    i = j; // as N is defined
   
   i = 10 * j + 1;
   i = (x , y) x- y; // error as the left-parenthesis is detached from the character of the macro
   
   i = (((j) * (j)) * ((j) * (j)));
   i = (((j) * (j)) * (j));
   i = jk; // error as this variable doesn't exist
   puts("ij");
   i = SQR(j); // error as there no replacement because SQR is undefined
   i = (j); // as there is no replacement-list despite the SQR macro exists
}
```
