#include <stdio.h>

double median(double x, double y, double z)
{
    double m;
    if (x <= y)
        if (y <= z)
            m = y;
        else if (x <= z)
            m = z;
        else
            m = x;
    if (z <= y)
        m = y;
    if (x <= z)
        m = x;
    return m;
}

int main(void)
{
    double x = 4, y = 6, z = 5;
    printf("Median is %.2f\n", median(x, y, z));
}