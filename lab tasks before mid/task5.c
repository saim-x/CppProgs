#include<stdio.h>
void main(){
    int subjects;
    int students= 50;
    printf("CLASS MARKING SYSTEM");
    printf("\nEnter the total no of subjects: ");
    scanf("%d", &subjects);
    int marks[students][subjects];
    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < subjects; j++)
        {
            int mark=0;
            printf("\nEnter the marks of subject no %d of student no %d: ", j+1,i+1);
            scanf("%d", &mark);
            while (mark<0 || mark>10)
            {
                printf("\nInvalid marks are typed. Pls enter again. ");
                scanf("%d", &mark);
            }
            marks[i][j]= mark;
            
        }
        
    }
    //Displaying all the marks
    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < subjects; j++)
        {
            printf("\nThe marks of %d student in %d subject is %d. ", i+1, j+1, marks[i][j]);
        }
        
    }
    //total marks
    int total_marks[students];
    int marku=0;
    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < subjects; j++)
        {
            marku += marks[i][j];
        }
        total_marks[i]= marku;
        marku=0;
        
    }
    //Displayin the total marks
    for (int i = 0; i < students; i++)
    {
        printf("\n\nThe total marks of student no %d are. %d", i+1, total_marks[i] );
    }
    //Minimum marks code
    int lowest_marks= total_marks[0];
    for (int i = 1; i < students; i++)
    {
        if (lowest_marks > total_marks[i])
        {
            lowest_marks = total_marks[i];
        }
        
    }
    printf("\n\nThe lowest of all marks is %d. ", lowest_marks);
    //Maximum Marks
    int highest_marks = total_marks[0];
    for (int i = 1; i < students; i++)
    {
        if (highest_marks<total_marks[i])
        {
            highest_marks= total_marks[i];

        }
        
    }
    printf("\nThe highest marks of all is %d. " ,highest_marks);
    
    

    



}