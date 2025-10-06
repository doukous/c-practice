#include <stdio.h>

int fact(int x) {
   return x <= 1 ? 1 : x * fact(x - 1);
}

int main(void) {
   int num = 3;
   printf("Fact of %d is %d\n", num, fact(num));
}
