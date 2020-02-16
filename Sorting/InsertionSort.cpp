#include <stdio.h>
#include <stdlib.h>

void insertionSort(int a[], int size){

    int i = 1;
    int j, value;

    while(i < size){
        value = a[i];
        j = i-1;
        //Move current element backwards until it is in the correct spot
        while(a[j] > value && j >= 0){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = value;
        i++;
    }
}
