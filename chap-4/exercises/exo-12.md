# Showing the outputs :

- a
    i = 5;
    j = ++i * 3 - 2;
    printf("%d %d", i, j);

    output: "6 16"
        i = i + 1 = 6
        j = 6 * 3 - 2
        j = 16

- b
    i = 5;
    j = 3 - 2 * i++;
    printf("%d %d", i, j);

    output: "6 -7"
        j = 3 - 2 * 5 = -7
        i = i + 1 = 6

- c
    i = 7;
    j = 3 * i-- + 2;
    printf("%d %d", i, j);

    output: "6 23"
        j = 3 * 7 + 2 = 23
        i = i - 1 = 6

- d
    i = 7;
    j = 3 + --i * 2;
    printf("%d %d", i, j);

    output: "6 15"
        i = i - 1 = 6
        j = 3 + 6 * 2 = 15
