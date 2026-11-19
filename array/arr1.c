#include<stdio.h>
int main()
{
int size,num;
printf("Enter the array size: ");
scanf("%d",&size);
int arr[size];
printf("Enter array elements: ");
for(int i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
printf("Enter number which you want to search in array: ");
scanf("%d",&num);
for(int i=0;i<size;i++)
{
    if(arr[i]==num)
    {
        printf("Element %d found in %d index \n",num,i);
        break;
    }
}
}