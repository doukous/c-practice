# Showing the output

- a.
    i = 3; j = 4; k = 5;
    printf("%d ", i < j || ++j < k);
    printf("%d %d %d", i, j, k);

    output: "1 3 5 5"
        i < j || ++j < k
        => ((i < j) || ((++j) < k))
        => ((3 < 4) || (5 < 5))
        => 1 || 0
        => 1

- b.
    i = 7; j = 8; k = 9;
    printf("%d ", i - 7 && j++ < k);
    printf("%d %d %d", i, j, k);

    output: "0 7 8 9"
        i - 7 && j++ < k
        => ((i - 7) && ((j++) < k))
        => 0
        
- c.
    i = 7; j = 8; k = 9;
    printf("%d ", (i = j) || (j = k));
    printf("%d %d %d", i, j, k);

    output: "1 7 9 9"
        (i = j) || (j = k)
        => (i = 8) || (j = 9)
        => 8 || 9
        => 1

- d.
    i = 1; j = 1; k = 1;
    printf("%d ", ++i || ++j && ++k);
    printf("%d %d %d", i, j, k);

    output: "1"
        (++i || ++j) && ++k
        => (++1 || ++1) && ++1
        => (2 || 2) && 2
        => 1 && 2
        => 1
    