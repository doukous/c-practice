# Showing the output

- a.
    i = 10; j = 5;
    printf("%d", !i < j);

    output: "1"
        !i < j
        => !10 < 5
        => 0 < 5
        => 1

- b. 
    i = 2; j = 1;
    printf("%d", !!i + !j);

    output: "1"
        !!i + !j
        => (!(!i)) + (!j)
        => !!2
        => !0
        => 1 + !1
        => 1 + 0
        => 1

- c. 
    i = 5; j = 0; k = -5;
    printf("%d", i && j || k);

    output: "1"
        i && j || k
        => (i && j) || k
        => (5 && 0) || -5
        => 0 || -5
        => 1

- d. 
    i = 1; j = 2; k = 3;
    printf("%d", i < j || k);

    output: "1"
        i < j || k
        => (i < j) || k
        => (1 < 2) || 3
        => 1 || 3
        => 1