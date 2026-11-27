//size of datatype or variable
#include<stdio.h>
int main()
{

    int num=7;
    char ch='A';
    double d=3.14;
    float f=2.71;
    printf("Size of : %lu \n", sizeof(num));
    printf("Size of : %lu \n", sizeof(int));
    printf("Size of : %lu \n", sizeof(d));
    printf("Size of : %lu \n", sizeof(double));
    printf("Size of : %lu \n", sizeof(ch));
    printf("Size of : %lu \n", sizeof(char));
    printf("Size of : %lu \n", sizeof(float));
    printf("Size of : %lu \n", sizeof(f));   
}