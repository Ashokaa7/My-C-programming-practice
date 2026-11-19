#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of an array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(int i=0;i<size;i++)
    {
        scanf(" %d",&arr[i]);
    }
    printf("Original array: ");
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }

    printf("reversed array: ");
    for(int i=size-1;i>=0;i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

}