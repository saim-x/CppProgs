#include <stdio.h>
int main()
{
    int months = 6;
    int sum = 0;
    int salary[months];
    for (int i = 0; i < months; i++)
    {
        printf("\nEnter the salary of %d month. ", i + 1);
        scanf("%d", &salary[i]);
    }
    // SUM OF SALARIES
    for (int i = 0; i < months; i++)
    {
        sum = sum + salary[i];
    }
    printf("\nThe sum of salaries of 6 months is %d.", sum);
    // AVERAGE OF THE SALARIES
    int average = 0;
    average = sum / months;
    printf("\nThe average of all salaries is %d\n", average);

    //ASCENDING ORDER
    int temp;

    for (int b = 0; b < 5; b++)
    {
        for (int a = 0; a < 5; a++)
        {
            if (salary[a] > salary[a + 1])
            {
                temp = salary[a];
                salary[a] = salary[a + 1];
                salary[a + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t", salary[i]);
    }
    

    return 0;
}