# Output of the statement

- for (i = 10; i >= 1; i /= 2)
    printf("%d ", i++);

- output : "10 5 3 2 1 1 1 1 1 ....(infinite of 1)"

    - loop 1 : print 10, i = 11, i = 11 / 2 = 5, i >= 1 ? true 
    - loop 2 : print 5, i = 6, i = 6 / 2 = 3, i >= 1 ? true
    - loop 3 : print 3, i = 4, i = 4 / 2, i >= 1 ? true
    - loop 4 : print 2, i = 3, i = 3 / 2, i >= 1 ? true
    - loop 5 : print 1, i = 2, i = 2 / 2, i >= 1 ? true (here start the infinite loop)