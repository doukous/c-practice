# Would the upc.c program still work if the expression is replaced :
 
- the current expression : 9 - ((total - 1) % 10) 
- the replacement : (10 - (total % 10)) % 10

- answer : yes it would solve the issue caused by the case in which total is factor of 10 by evaluating its remainder