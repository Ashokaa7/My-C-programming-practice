/*AP :
In mathematics, an arithmetic progression (AP) or arithmetic sequence is a sequence of numbers such that the difference between the consecutive terms is constant.
For instance, the sequence 5, 7, 9, 11, 13, 15 ... is an arithmetic progression with common difference of 2.

GP :
In mathematics, a geometric progression, also known as a geometric sequence, is a sequence of numbers where each term after the first is found by multiplying the previous one by a fixed, non-zero number called the common ratio.
For example, the sequence 2, 6, 18, 54, ... is a geometric progression with common ratio 3. Similarly 10, 5, 2.5, 1.25, ... is a geometric sequence with common ratio 1/2.

HP :
    In mathematics, a harmonic progression (or harmonic sequence) is a progression formed by taking the reciprocals of an arithmetic progression.
*/

#include<stdio.h>
int main()
{
    int A,R,N;
    printf("Enter the First number 'A': ");
    scanf("%d",&A);
    
    printf("Enter the Common Difference/Ratio 'R': ");
    scanf("%d",&R);
    
    printf("Enter the number of terms'N': ");
    scanf("%d",&N);
    
    if(A<=0||R<=0||N<=0)
    {
        printf("Invalid input\n");
        return 0;
    }
    
    //AP
    printf("AP = ");
    int ap=A;
    for(int i=0;i<N;i++)
    {
        printf("%d, ",ap);
        ap=ap+R;
    }
    printf("\n");
    
    //GP
    printf("GP = ");
    int gp=A;
    for(int i=0;i<N;i++)
    {
        printf("%d, ",gp);
        gp=gp*R;
    }
    printf("\n");
    
    //AP
    printf("HP = ");
    ap=A;
    for(int i=0;i<N;i++)
    {
        printf("%f, ",1.0/ap);
        ap=ap+R;
    }
    printf("\n");
    
}