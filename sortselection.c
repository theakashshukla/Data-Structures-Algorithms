#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
  
int main(){
    int a[20], i, j, size, swap, pos;
    printf("----------Akash Shukla------------\n");
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter array elements: ");
    for(i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
    }
    for (i=0; i<(size-1); i++){
        pos= i;
        for (j=i+1; j<size; j++){
            if (a[pos] > a[j])
            pos= j;
        }
        if (pos!=i){
            swap = a[i];
            a[i] =a[pos];
            a[pos] = swap;
        }
    }
    printf("Sorted Element is:");
    for (i=0; i<size; i++)
    printf("%d ", a[i]);
    return 0;
} 