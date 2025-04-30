# Why the technique doesn't work :

- the current operation : 9 - ((total - 1) % 10)
- the alternative : 10 - (total % 10)

- The value isn't the same when the total is a factor of 10

    ie :
    10 - 1 = 9, 9 % 10 = 9, 9 - 9 = 0
    10 % 10 = 0, 10 - 0 = 10

