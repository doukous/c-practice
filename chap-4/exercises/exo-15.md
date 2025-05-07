# Values of these statements

Assuming i = 1, j = 2

- a. i += j;
    values : i = 3, j = 2

    i = i + j => i = 1 + 2 = 3

- b. i--;
    values : i = 0, j = 2

    i = i - 1 = 0

- c. i * j / i;
    values : 1, j = 2

    no side effects in the expression

- d. i % ++j;
    values : i = 1, j = 3

    i % ++j = i % (j = j + 1)