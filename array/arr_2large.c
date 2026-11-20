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
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    int second_large=arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]>largest)
        {
            second_large=largest;
            largest=arr[i];
        }
    }
    printf("Second largest element in array: %d\n",second_large);
}