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
        printf("Size limit Cross:");
        exit(0);
    }
    printf("Enter Element of Array:");
    for(i=0;i<j;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=j;i>0;i--)
    {
        a[i]=a[i-1];
    }
    printf("Enter the Element to instead :");
    scanf("%d",&n);
    a[0]=n;
    for(i=0;i<=j;i++)
    {
    printf("%d ",a[i]);
    }
    getch();
   
}