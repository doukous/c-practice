#include <stdio.h>
#define CONSTANT_VALUE 4.0f / 3.0f


int main(void)
{
    float radius = 10.0f;
    float volume = CONSTANT_VALUE * 3.14f * radius * radius * radius;

    printf("The sphere's volume is : %.3f m³\n", volume);

    return 0;
}