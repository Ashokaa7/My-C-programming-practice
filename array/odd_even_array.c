#include<stdio.h>
int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int odd_arr[size],odd_count=0;
    int even_arr[size],even_count=0;
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            even_arr[even_count]=arr[i];
            even_count++;
        }
        else
        {
            odd_arr[odd_count]=arr[i];
            odd_count++;
        }
    }
    printf("Odd array elements: ");
    for(int i=0;i<odd_count;i++)
    {
        printf("%d ",odd_arr[i]);
    }
    
    printf("\nEven array elements: ");
    for(int i=0;i<even_count;i++)
    {
        printf("%d ",even_arr[i]);
    }
    printf("\n");
    return 0;    
}