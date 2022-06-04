#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#define max 20

int main()
{
	int a[max],i,j,n,p;
	printf("Enter the limit: ");
	scanf("%d",&j);
	if(j>=max)
	{
		printf("Size of the limit cross: ");
		exit(0);
		
	}
	printf("Enter the Element of Array");
	for(i=0;i>j;i++)
	{
		scanf("%d",&a[i]);
	
	}
	printf("Enter the Position where you want to insert the Element: ");
	scanf("%d",&p);
	printf("Enter the value into that Position: ");
	scanf("%d",&n);
	for(i=j;i>p;i--)
{
	a[i]=a[i-1];
}
a[p]=n;
for(i=0;i<=j;i++)
{
	printf("%d",&a[i]);
}
getch();
}