# Showing the outputs :

- a. 
    i = 6;
    j = i += i;
    printf("%d %d", i, j);

    output: "12 12"
        i += i, i = i + i, i = 6 + 6 = 12
        j = i, j = 12

- b.
    i = 5;
    j = (i -= 2) + 1;
    printf("%d %d", i, j);

    output: "3 4"
        i = i - 2 = 5 -2 = 3
        j = i + 1 = 4 

- c.
    i = 7;
    j = 6 + (i = 2.5);
    printf("%d %d", i, j);

    output: "2 9"
        i = 2.5 => i = 2
        j = 7 + i = 7 + 2 = 9

- d.
    i = 2; j = 8;
    j = (i = 6) + (j = 3);
    printf("%d %d", i, j);

    output: "6 9"
       j = 3,
       i = 6,
       j = i + j = 3 + 6 = 9