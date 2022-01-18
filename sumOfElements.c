#include <stdio.h>

int main()
{
    int array[] = {1,2,10,2,3,5};
    int sum = 0;
    int length = sizeof(array)/sizeof(array[0]);
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
        
    }
    printf("Sum of giver array is %d\n", sum);
    


    return 0;
}