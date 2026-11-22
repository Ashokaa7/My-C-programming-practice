#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    //upper half
    for(int i=num;i>=1;i--)
    {
        for(int j=i;j<=num;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    //lower half
    for(int i=2;i<=num;i++)
    {
        for(int j=i;j<=num;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}