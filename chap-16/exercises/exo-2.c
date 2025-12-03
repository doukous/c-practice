#include <stdio.h>

struct {
  double real, imaginary;
} c1 = {0.0, 0.0}, c2 = {1.0, 0.0}, c3;

int main(void) {
  printf("for c1 (before copy) -> real: %.2f, imaginary; %.2f\n", c1.real, c1.imaginary);

  c1 = c2; // copying c2 into requires only one statement, this one

  printf("for c1 (after copy) -> real: %.2f, imaginary; %.2f\n", c1.real, c1.imaginary);
  printf("for c2 -> real: %.2f, imaginary; %.2f\n", c2.real, c2.imaginary);

  c3.real = c1.real + c2.real;
  c3.imaginary = c1.imaginary + c2.imaginary;

  printf("for c3 -> real: %.2f, imaginary; %.2f\n", c3.real, c3.imaginary);
}
