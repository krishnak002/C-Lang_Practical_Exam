// Q-2 Create a C program to find the largest element in an 1D array.

#include<stdio.h>

int main()
{
    int size;

    printf("Please Enter size of array: ");
    scanf("%d",&size);

    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("a[%d]=",i);
        scanf("%d", &a[i]);
    }

    int max = a[0];
    for(int i = 1; i < size; i++) {
        if(a[i] > max) 
        {
            max = a[i];
        }
    }
    printf("\n The largest element is: %d", max);

    return 0;
}