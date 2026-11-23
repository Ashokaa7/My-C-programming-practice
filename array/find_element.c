#include<stdio.h>
int main()
{
    int size, num, flag=0;
    printf("Enter array size: ");
    scanf("%d",&size);
    
    int arr[size];
    printf("Enter array elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d",&num);
    for(int i=0;i<size;i++)
    {
        if(num==arr[i])
        { 
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("Element Found\n");
    }
    else
    {
        printf("Not Found\n");
    }
}