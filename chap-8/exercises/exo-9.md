# Computing the average temperature

Here the program fragment :

```C
float temperature_readings[30][24]
float average, sum = 0;

for (int i = 0; i < 30; i++) 
{
    for (int j = 0; i < 24; i++)
    {
        sum += temperatue_readings[i][j];
    }
}

average = sum / (30 * 24)
```