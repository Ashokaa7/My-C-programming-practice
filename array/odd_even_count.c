#include<stdio.h>
int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d",&size);
    
    int arr[size];
    int even_count=0,odd_count=0;
    printf("Enter array elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("Even count: %d\n",even_count);
    printf("Odd count: %d\n",odd_count);
}