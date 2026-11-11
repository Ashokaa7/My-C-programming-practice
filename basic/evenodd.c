//Another way to check whether a number is even or odd is to divide the number by 2 and multiply the quotient by 2. If the result is equal to the original number, then it is even; otherwise, it is odd.
#include<stdio.h>
int main()
{
   int num;
   printf("Enter a number: ");
   scanf("%d", &num);
   
   if( (num/2) * 2 == num )
      printf("%d is even.\n", num);
   else
      printf("%d is odd.\n", num);
   
   return 0;
}