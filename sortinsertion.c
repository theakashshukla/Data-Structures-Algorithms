#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
 int a[20], j, i, size, key;
 printf("----------Akash Shukla------------\n");
 printf("Enter the size of array:\n");
 scanf("%d", &size);
 printf("Enter the elements:");
 for(i=0;i<size;i++)
 {
  scanf("%d", &a[i]);
 }
 for(i=1;i<size;i++)
 {
  key=a[i];
  j=i-1;
  while(key<a[j]&&j>=0)
  {
   a[j+1]=a[j];
   j=j-1;
  }
  a[j+1]=key;
 }
 printf("Sorted Element is:");
 for(i=0;i<size;i++)
 {
  printf("%d ",a[i]);
 }
 getch();
 }