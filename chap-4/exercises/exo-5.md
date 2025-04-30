# The value of each of the following expressions in C89

here how the output is evaluated :

a / b * b + a % b = a => a % b = a - a / b * b

- a. 8 % 5
    output : 3

- b. -8 % 5
    output : -3 or -2

    -8 + 1 * 5 = -3
    -8 + 2 * 5 = -2

- c. 8 % -5
    output : 3 or -2

    8 + 1 * -5 = 3
    8 + 2 * -5 = -2

- d. -8 % -5
    output : -3 or 2

    -8 - 1 * -5 = -3
    -8 - 2 * -5 = 2