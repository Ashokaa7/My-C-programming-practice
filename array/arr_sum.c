#include<stdio.h>
int main()
{
    int size,sum=0;
    printf("Enter the size of an array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum of the array element is: %d\n",sum);
}