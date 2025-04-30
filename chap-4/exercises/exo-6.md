# The value of each of the following expressions in C99

here how the output is evaluated :

a / b * b + a % b = a => a % b = a - a / b * b

and in C99, the expression is truncated toward zero

- a. 8 % 5
    output : 3

- b. -8 % 5
    output : -3

    -8 + 1 * 5 = -3

- c. 8 % -5
    output : 3

    8 + 1 * -5 = 3

- d. -8 % -5
    output : -3 or 2

    -8 - 1 * -5 = -3