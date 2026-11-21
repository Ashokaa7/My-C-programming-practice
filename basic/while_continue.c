#include<stdio.h>
int main()
{
    int num = 0;
    while(num<10)
    {
        if(num==5)
        {
            num++;
            continue;
        }
        printf("%d ",num);
        num++;
    }
}