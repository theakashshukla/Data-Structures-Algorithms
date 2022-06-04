#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void quicksort (int a[], int low, int high){
    int x, y, p, temp ;
    x = low ;
    y = high ;
    p = a[(x+y)/2] ;
    do{
        while (a[x] < p) x++ ;
        while (a[y] > p) y-- ;
        if (x <= y){
            temp = a[x] ;
            a[x] = a[y] ;
            a[y] = temp ;
            x++ ;
            y-- ;
        }
    }while (x <= y) ;
    if (low < y) quicksort (a, low, y) ;
    if (x < high) quicksort (a, x, high) ;
}
int main(){
    int a[20], size;
    printf("----------Akash Shukla------------\n");
    printf("Enter the array size: ");
    scanf("%d", &size);
    printf("Enter the array elements: ");
    for (int i = 0; i < size; i++){
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, size-1);
    printf("Sorted array is: ");
    for (int i = 0; i < size; i++){
        printf("%d ", a[i]);
    }
    getch();
    return 0;

}