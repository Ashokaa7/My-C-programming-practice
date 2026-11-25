/*• The first perfect number is 6, because 1, 2, and 3 are its proper positive divisors, and 1 + 2 + 3 = 6. Equivalently, the number 6 is equal to half the sum of all its positive divisors: ( 1 + 2 + 3 + 6 ) / 2 = 6

• The next perfect number is 28 = 1 + 2 + 4 + 7 + 14. This is followed by the perfect numbers 496 and 8128*/

#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num<=0)     //if user enters negative or 0 then it shows error message
    {
        printf("Error : Invalid input, Enter only positive number");
        return 0;
    }
    
    for(int i=1;i<=num/2;i++)  //no proper divisor can be greater than num/2
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
        printf("Yes, entered number is perfect number \n");
        
    }
    else{
        printf("No,entered number is not a perfect number\n");
    }
    return 0;
}