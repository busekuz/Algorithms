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

void bubbleSort(int array[], int size){

    int i = size;
    bool isSorted = false;

    //Iterate whole array until it is fully sorted
    while(i > 1 && !isSorted){
        isSorted = true;
        for(int j = 1; j < i; j++){
            //Swap elements if they are not sorted
            if(array[j] < array[j-1]){
                swap(&array[j], &array[j-1]);
                isSorted = false;
            }
        }
        i--;
    }

}


int main(){

    //Example array
    int array_size = 5;
    int a[array_size] = {1, 54, 3, 0, 7};

    bubbleSort(a, array_size);
    
    for(int i = 0; i < array_size; i++){
        cout << a[i] << endl;
    }

    
    return 0;
}