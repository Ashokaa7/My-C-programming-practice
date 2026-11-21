#include<stdio.h>
int main()
{
    int num;
    int flag=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num<2)
    {
        printf("%d is not a prime number\n",num);
    }
    else
    {
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        printf("%d is prime number\n",num);
    }
    else{
        printf("%d is not a prime number\n",num);
    }
    return 0;
}