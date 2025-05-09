# Showing the output

- a. 
    i = 2; j = 3;
    k = i * j == 6;
    printf("%d", k);

    - output: "1"
        k = (i * j) == 6
        => (3 * 2) == 6
        => 6 == 6
        => 1

- b.
    i = 5; j = 10; k = 1;
    printf("%d", k > i < j);

    - output: "0"
        (k > i) < j
        => (1 > 5) < 10
        => 1 < 10
        => 0

- c.
    i = 3; j = 2; k = 1;
    printf("%d", i < j == j < k);

    - output: "1"
        i < j == j < k
        => (i < j) == (j < k)
        => (3 < 2) == (2 < 1)
        => 0 == 0
        => 1

- d.
    i = 3; j = 4; k = 5;
    printf("%d", i % j + i < k);

    - output: "0"
        i % j + i < k
        => ((i % j) + i) < k
        => ((3 % 4) + 3) < 5
        => (3 + 3) < 5
        => 6 < 5
        => 0