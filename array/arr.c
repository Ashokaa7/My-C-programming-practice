#include<stdio.h>
int main()
// {
//     char arr[5]={'A','B','C','D','E'};
//     printf("%c \n", arr[3]);
// }
// {
//     int arr[5]={1,2,3,4,5};
//     printf("%d \n", arr[3]);
// }
// 
{
    int arr[5];//={'A','B','C','D','E'};
    printf("Enter elements: ");
    for(int i=0;i<5;i++)
    {
        scanf(" %d",&arr[i]);
    }
    printf("Elements entered are:[");
    for(int i=4;i>=0;i--)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");

}