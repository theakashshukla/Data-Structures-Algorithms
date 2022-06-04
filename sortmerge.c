#include<stdio.h>
#include<conio.h>

void merge(int a[], int low, int mid, int high)
{
    int i, h, j, b[50];
    i=low;
    h=low;
    j=mid+1;
    while((h<=mid)&&(j<=high))
    {
        if (a[h]<a[j])
        {
            b[i]=a[h];
            h=h+1;
        }
        else
        {
            b[i]=a[j];
            j=j+1;
        }
        i=i+1;
    }
    while(h<=mid)
    {
        b[i]=a[h];
        h=h+1;
        i=i+1;
    }
    while(j<=high)
    {
        b[i]=a[j];
        j=j+1;
        i=i+1;
    }
    for(i=low;i<=high;i++)
    {
        a[i]=b[i];
    }
}
 
 void mergesort(int a[], int low, int high)
 {
     int mid;
     if(low<high)
     {
         mid=(low+high)/2;
         mergesort(a, low, mid);
         mergesort(a, mid+1, high);
         merge(a, low, mid, high);
     }
 }
void main()
{
    int a[50], i, n;
    printf("----------Akash Shukla------------\n");
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    mergesort(a, 0, n-1);
    printf("\nSorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    getch();
}
