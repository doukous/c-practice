#include <stdio.h>

struct complex {
  double real, imaginary;
};

struct complex make_complex(double real, double imaginary);
struct complex add_complex(struct complex c1, struct complex c2);

int main(void) {
  struct complex c1, c2, c3;

  struct complex created_complex = make_complex(2.4, 4.1);
  printf("created_complex -> real: %.2f, imaginary: %.2f\n",
         created_complex.real, created_complex.imaginary);

  struct complex another_complex = {1.0, 2.3};
  printf("another_complex -> real: %.2f, imaginary: %.2f\n",
         another_complex.real, another_complex.imaginary);

  struct complex sum_complex = {created_complex.real + another_complex.real,
                                another_complex.imaginary +
                                    another_complex.imaginary};

  printf("sum_complex -> real: %.2f, imaginary: %.2f\n", sum_complex.real,
         sum_complex.imaginary);
}

struct complex make_complex(double real, double imaginary) {
  struct complex cplx = {real, imaginary};
  return cplx;
}

struct complex add_complex(struct complex c1, struct complex c2) {
  struct complex merge = {c1.real + c2.real, c1.imaginary + c2.imaginary};
  return merge;
}
