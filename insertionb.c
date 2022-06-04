#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define max 20

int main() {
    int a[max], i, j, n;
    printf("Enter Limt:");
    scanf("%d",&j);
    if(j>=max)
    {
        printf("Size limit Cross: ");
        exit(0);
    }
    printf("Enter element of Array: ");
    for(i=0;i<j;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to instead: ");
    scanf("%d",&n);
    a[j]=n;
    for(i=0;i<=j;i++)
    {
    printf("%d ",a[i]);
    }
    getch();
   
}