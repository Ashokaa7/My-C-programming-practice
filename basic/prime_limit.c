//program to print prime number up to the limit
#include<stdio.h>
int main()
{
    int limit;
    printf("Enter the limit: ");
    scanf("%d",&limit);
    if(limit<2)
    {
        printf("Invalid Limit");
        return 0;
    }
    for(int num=2;num<=limit;num++)
    {
        int flag=0;
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d ",num);
        }
    }
    printf("\n");

}