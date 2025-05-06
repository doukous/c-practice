# Outputs of th following programs fragments :

- a 
    i = 7; j = 8;
    i *= j + 1;
    printf("%d %d", i, j);

    output : "16 8"
    j = 8, i = 7 * 8 + 1

- b 
    i = j = k = 1;
    i += j += k;
    printf("%d %d %d", i, j, k);

    output : "4 3 1"
        k = 1 
        j = j + k = 2 + 1 = 3 
        i = j + i = 3 + 1 = 4

- c 
    i = 1; j = 2; k = 3;
    i -= j -= k;
    printf("%d %d %d", i, j, k);

    output : "3 -1 -2"
        k = 3
        j = j - k = 2 - 3 = -1
        i = j - i = -1 - 1 = -2

- d
    i = 2; j = 1; k = 0;
    i *= j *= k;
    printf("%d %d %d", i, j, k);

    output : "0 0 0"
        k = 0
        j = j * k = 1 * 0
        i = i * j = 2 * 0