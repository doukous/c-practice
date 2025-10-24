# Correcting the function



- the function given with its errors :

```c
void avg_sum(double a[], int n, double *avg, double *sum) {
    int i;
    sum = 0.0; // here, this the adress that is assigned a value not the object

    for (i = 0; i < n; i++)
        sum += a[i]; // same issue here
    
    avg = sum / n; // same as above
}
```
- the correction

```c
void avg_sum(double a[], int n, double *avg, double *sum) {
    int i;
    *sum = 0.0; // now the object is resolved

    for (i = 0; i < n; i++)
        *sum += a[i]; // same here
    
    *avg = sum / n; // same here
}
```