#include<stdio.h>
int main(){
    int len, rot;
    printf("Enter the length of the array: ");
    scanf("%d", &len);
    int array[len];
    //getting input from the user of the array
    for (int i = 0; i < len; i++)
    {
        printf("\nEnter the %d Element of the array. ", i+1);
        scanf("%d", &array[i]);
    }
    printf("\nEnter the number of rotation of the array. ");
    scanf("%d", &rot);
    int temp = array[0];
    for ( int i = 0; i < rot; i++)
    {
        int temp = array[0];

        for (int j = 0; j<len; j++)
        {
            if (j==len-1)
            {
                array[j]= temp;
            }
            else{
                array[j] = array[j+1];


            }
        }
    }
    //Printing array
    for (int i = 0; i < len; i++)
    {
        printf("\nthe %d Element of the array is . %d", i+1, array[i]);
    }
    return 0;
}