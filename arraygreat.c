#include<stdio.h>
void main(){
    int array_size, i, j, ans=0;
    printf("Enter the size of array: ");
    scanf("%i", &array_size);
    int array[array_size];
    for (i = 0; i < array_size; i++)
    {
        printf("\nEnter number %d: ",(i+1) );
        scanf("%i", &array[i]);
        // printf("%i", array[i]);
    }
    for ( i = 0, j=0 ; i < array_size; i++)
    {
        if (array[i] > array[j] && array[i]> ans)
        {
            printf("\n%i is greater than %i",array[i],array[j]);
            ans = array[i];
        }else if(array[i]< array[j]){
            printf("\n%i is smaller than %i",array[i],array[j]);
        }else if(array[i] ==  array [j]){
            printf("%i and %d are equal\n", array[i], array[j]);
        }else if (array[i]<ans && array[i]> array[j]){
            printf("\n%d is greater than %d but not the greatest.", array[i], array[j]);
        }
        
        
        else{
            printf("An error occured!");
            
        }
    }
    printf("\n\n\nThe greatest number of all is found to be %d.\n\n\n", ans);

    

    
}