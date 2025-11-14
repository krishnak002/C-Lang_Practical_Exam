// Q-4 Write a C program to find square of each elements of an 1D array using Pointer.

#include<stdio.h>
int main()
{
    int size;

    printf("\n please enter size of array : ");
    scanf("%d", &size);

    int a[size];
    int *ptr[size];

    for(int i=0;i<size;i++)
    {
        printf("a[%d]=",i);
        scanf("%d", &a[i]);
    }

    for(int i=0;i<size;i++)
    {
        ptr[i] = &a[i];
    }

    printf("square of array element \n: ");

    for(int i=0;i<size;i++)
    {
        printf("%d ", *ptr[i] * *ptr[i]);
    }

    return 0;
}