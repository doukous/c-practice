# Writing the function

Here is the function :

```C
float compute_GPA(char grades[], int n)
{
    float average = 0f, numerical_grade;

    for (int i = 0; i < n; i++)
    {
        switch (grades[i])
        {
            case 'A':
                numerical_grade = 4;
                break;
            
            case 'B':
                numerical_grade = 3;
                break;

            case 'C':
                numerical_grade = 2;
                break;

            case 'D':
                numerical_grade = 1;
                break;
            
            case 'F':
                numerical_grade = 0;
                break;
        }

        average += numerical_grade;
    }

    average /= n;

    return average;
}
```