# Execution tracing

Let's take n = 5

1. n = 7
    - pb(7 / 2) = 3
        - pb(3 / 2) = 1
            - pb(1 / 2) = 0
                - pb(0 / 2)
            putchar('0' + 1 % 2) = '1'
        putchar('0' + 3 % 2) = '11'
    putchar('0' + 7 % 2) = '111'

- it seems like the function gives the binary expression of an integer as the integer value of the character '0' is 0