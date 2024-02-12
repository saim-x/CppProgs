#include <stdio.h>
void main()
{
    int array[10] = {1, 5, 2, 6, 2, 8, 3, 9, 5, 4};
    for (int j = 0; j < 9; j++)
    {
        for (int i = 0; i < 9; i++)
        {
            int temp;

            if (array[i] > array[i+1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
        
    }
    for (int a = 0; a < 10; a++)
        {
            printf("%d", array[a]);
        }
        printf("\n");
}