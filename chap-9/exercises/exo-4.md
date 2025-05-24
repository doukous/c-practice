# Wrtiting the function

Here is the function :

```C

int day_of_year(int day, int month, int year)
{
    int numbers_of_days = day;

    for (int i = 1; i < month; i++)
    {
        switch (i) {
            case 1: 
            case 3: 
            case 5: 
            case 7: 
            case 8: 
            case 10: 
            case 12:
                numbers_of_days += 31;
                break;
            
            case 4: 
            case 6: 
            case 9: 
            case 11: 
                numbers_of_days += 30;
                break;
        }

        if (i == 2)
            numbers_of_days += (year % 4 == 0 && year % 100 != 0) || 
                year % 400 == 0 ? 29 : 28;
    }

    return numbers_of_days;
}
```