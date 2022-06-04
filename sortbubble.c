#include<stdio.h>
#include<conio.h>

void main(){
    int a[20], i, j, size , temp;
    printf("----------Akash Shukla------------\n");
    printf("Enter the array Size:");
    scanf("%d", &size);
    printf("Enter the array elements:");
    for(i=0; i<size; i++)
    {
    scanf("%d", &a[i]);
    }
    for(i=0; i<size-1; i++)
    {
    for(j=0; j<size-i-1; j++)
    {
    if(a[j]>a[j+1])
    {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
    }
    }
    }
    printf("Sorted array is:");
    for(i=0; i<size; i++)
    {
    printf("%d ", a[i]);
    }
    getch();
}
