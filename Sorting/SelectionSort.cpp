#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int a[], int size){

    int min_index = -1;

    for(int i = 0 ; i < size-1; i++){
        min_index = i;
        for(int j = i+1; j < size; j++){
            if(a[j] < a[min_index]){
                min_index = j;
            }
        }
        swap(&a[min_index], &a[i]);
    }


}
