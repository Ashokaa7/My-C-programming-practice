#include<stdio.h>
int main()
{
int size,num,count=0,i;

printf("Enter the array size: ");
scanf("%d",&size);
// printf("Enter number which you want to search in array: ");
// scanf("%d",&num);
int arr[size];
printf("Enter array elements: ");
for(int i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
printf("Enter number which you want to search in array: ");
scanf("%d",&num);
for(i=0;i<size;i++)
{
    if(arr[i]==num)
    {
        count++;
    }

}
printf("Element %d found %d  times\n",num,count);
}