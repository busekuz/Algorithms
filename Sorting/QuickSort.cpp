#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <ostream>

using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int l, int r){

    int pivot = a[l];
    int bigIndex = l + 1;
    int smallIndex = r;
    int i = 0;

    while(bigIndex < smallIndex){

        i++;
        
        while (a[bigIndex] < pivot && bigIndex <= r){
            bigIndex++;
        }
        while (a[smallIndex] > pivot && smallIndex >= 0){
            smallIndex--;
        }

        if(bigIndex < smallIndex){
            swap(&a[smallIndex], &a[bigIndex]);
        }
    }


    swap(&a[smallIndex], &a[l]);
    return smallIndex;

}

void quickSort(int a[], int l, int r){

    if(l < r){
        int p = partition(a, l, r);
        quickSort(a, l, p-1);
        quickSort(a, p+1, r);
    }

}


int main(){

    //Example array
    int array_size = 5;
    int a[array_size] = {1, 54, 3, 0, 7};

    quickSort(a, 0, array_size - 1);

    return 0;
}