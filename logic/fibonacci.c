//Fibonacci series upto the limit
#include<stdio.h>
int main()
{
    int num,a=0,b=1,c,i;//to print starting 0 and 1 i initialized a and b value
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Invalid input");//if user input is smaller than 0 or negative it will show invalid input
        return 0;
    }
    while(a<=num)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    printf("\n");
}