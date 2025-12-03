#include <stdio.h>

struct fraction {
    int numerator, denominator;
};

struct fraction reduce(struct fraction f);
struct fraction add(struct fraction f1, struct fraction f2);
struct fraction substract(struct fraction f1, struct fraction f2);
struct fraction multiply(struct fraction f1, struct fraction f2);
struct fraction divide(struct fraction f1, struct fraction f2);

int main(void) {
    struct fraction f1 = {1, 2};
    struct fraction f2 = {2, 5};
    struct fraction result = multiply(f1, f2);

    printf("result of operation : %d/%d\n", result.numerator, result.denominator);
}

struct fraction reduce(struct fraction f) {
    int largest = f.numerator > f.denominator ? f.numerator : f.denominator;
    int smallest = f.numerator <= f.denominator ? f.numerator : f.denominator;

    int temp;

    while (largest != 0) {
        temp = largest;
        largest = smallest % largest;
        smallest = temp;
    };

    f.numerator /= smallest;
    f.denominator /= smallest;
    return f;
}

struct fraction add(struct fraction f1, struct fraction f2) {
    int common_denominator = f1.denominator * f2.denominator;

    struct fraction sum = {
        (f1.numerator * f2.denominator) +
        (f2.numerator * f1.denominator),
        common_denominator
    };

    return reduce(sum);
}


struct fraction substract(struct fraction f1, struct fraction f2) {
    int common_denominator = f1.denominator * f2.denominator;

    struct fraction result = {
        (f1.numerator * f2.denominator) -
        (f2.numerator * f1.denominator),
        common_denominator
    };

    return reduce(result);
}


struct fraction multiply(struct fraction f1, struct fraction f2) {
    struct fraction product = {
        f1.numerator * f2.numerator,
        f1.denominator * f2.denominator
    };

    return reduce(product);
}


struct fraction divide(struct fraction f1, struct fraction f2) {
    struct fraction product = {
        f1.numerator * f2.denominator,
        f1.denominator * f2.numerator
    };

    return reduce(product);
}
