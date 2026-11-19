#include<stdio.h>
int main()
{
    int size,num;

    printf("Enter the array size: ");
    scanf("%d",&size);
    int arr[size];
    int flag=1;
    printf("Enter array elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<size;i++)
    {
        if(arr[i]!=arr[size-1-i])
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("Array is Palindrome\n");

    }
    else{
        printf("Array is Not palindrome\n");
    }

}