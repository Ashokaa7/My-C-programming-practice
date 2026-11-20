#include<stdio.h>
int main()
{
    int size1,size2;
    float median1,median2;
    printf("Enter the size of an array1: ");
    scanf("%d",&size1);
    int arr1[size1];
    printf("Enter the size of an array2: ");
    scanf("%d",&size2);
    int arr2[size2];
    //taking array1 elements from user
    printf("Enter array1 elements: ");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    //taking array2 elements from user
    printf("Enter array2 elements: ");
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    //sorting array1
    for(int i=0;i<size1-1;i++)
    {
        for(int j=0;j<size1-i-1;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                int temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
    printf("Sorted array1: ");
    for(int i=0;i<size1;i++)
    {
        printf("%d ",arr1[i]);
    }
    //sorting array2
    for(int i=0;i<size2-1;i++)
    {
        for(int j=0;j<size2-i-1;j++)
        {
            if(arr2[j]>arr2[j+1])
            {
                int temp=arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=temp;
            }
        }
    }
    printf("\nSorted array2: ");
    for(int i=0;i<size2;i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");
    //median of array1
    if(size1%2!=0)
    {
        median1=arr1[size1/2];
    }
    else{
        median1=(float)(arr1[size1/2] + (arr1[size1/2-1]))/2;
    }
    printf("median of array1: %g\n",median1);
    //median of array2
    if(size2%2!=0)
    {
        median2=arr2[size2/2];
    }
    else{
        median2=(float)(arr2[size2/2] + (arr2[size2/2-1]))/2;
    }
    printf("median of array2: %g\n",median2);

}