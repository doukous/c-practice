# The variables and parameters visible in the scope

- a, for the f function:

  - int b, the one within the g function
  - int d
  - int c

- b, for the the g function:

  - int b
  - int c, the one within g
  - int a, the parameter

- c, the block in which a and d are declared:

  - int a, the one whithin the block
  - int d
  - int c
  - int b

- d, the main function:

  - int d
  - int c, the one within the function
  - int b
