#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array. ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the element of array. ");
        scanf("%d", &array[i]);
    }
    int freq[99]={0};
    for (int i = 0; i < n; i++)
    {
        ++freq[array[i]];
        
    }
    //In SIMPLE FORMAT
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nFrequency of %d is %d. ", array[i], freq[i]);
    }
    
    //IN STARS FORMAT
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d.", i);
        for (int j = 1; j <= freq[i]; j++)
        {
            printf(" * ");
        }
        printf("\n");
        
    }
    
    
    
    return 0;
}