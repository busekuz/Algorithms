#include <stdlib.h>
#include<iostream>
using namespace std;

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



int main()
{


    int array_size = 6;
    int a[array_size] = {1, 54, 1, 3, 0, 7};

    insertionSort(a, array_size);
    
    for(int i = 0; i < array_size; i++){
        cout << a[i] << endl;
    }
    return 0;    

}
