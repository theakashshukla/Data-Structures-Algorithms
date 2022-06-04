#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define max value 20

int main(){
   
     int a[max], i, j;
     printf("\n Enter Limit");
     scanf("%d", &j);
     if(j>=max)
     {
         printf("\n Array size doesn't exit ");
         exit(0);
     }
     printf("\n Input elements of Array \n");
     for(i=0; i<j; i++);
     {
         scanf("%d", & a[i]);
     }
     printf("\n Elements of Array after Deletion At Begining: \n");
     j--;
        for(i=0; i<j; i++)
        {
            printf("%d\t", a[i]);
        }
        getch();
      
}
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define max 20
int main()
{
    int a[max], i, j;
    printf("-: Created By PAWAN MISHRA :-\n \t Delete an element in the array From First Position Program:\n\n");
    printf("Enter the size of array: ");
    scanf("%d", &j);
    if (j >= max)
    {
        printf("Array size doesn't exit ");
        exit(0);
    }
    printf("Input the elements of array: \n");
    for (i = 0; i < j; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Elements of array after deletion at beginning: \n");
    j--;
    for (i = 0; i < j; i++)
    {
        a[i] = a[i + 1];
        printf("%d\n", a[i]);
    }
    return 0;
}
