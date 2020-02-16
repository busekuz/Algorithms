#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void copy(int copy_from[], int copy_to[], int n, int start_index){
    //Copy from one array's n elements starting from start_index
    //to copy_to array
    for(int i = 0; i < n; i++)
        copy_to[i] = copy_from[start_index + i];

}

void mergeArray(int arr[], int start, int middle, int end)
{   
    //Set sizes of sub-arrays
    int i = 0, j = 0, k = start;
    int leftSize = middle - start + 1;
    int rightSize =  end - middle;

    int leftArray[leftSize], rightArray[rightSize];

    //Divide arr to 2 sub-arrays from middle
    copy(arr, leftArray, leftSize, start);
    copy(arr, rightArray, rightSize, (middle + 1));

    //Select the smaller int between right and left sub-array
    //Then move to next element until one of the sub-arrays finished
    while (i < leftSize && j < rightSize)
    {
        if (leftArray[i] <= rightArray[j])
            arr[k++] = leftArray[i++];
        else
            arr[k++] = rightArray[j++];     
    }

    //Set remaining elements (if any)
    while (i < leftSize)
        arr[k++] = leftArray[i++];

    while (j < rightSize)
        arr[k++] = rightArray[j++];

}

void mergeSort(int N, int array[], int start, int end){

    int middle;
    int n = N;

    //Start recursive merge sort

    if(end > start){
        middle = (start + end) / 2;
        mergeSort(n, array, start, middle);
        mergeSort(n, array, (middle+1), end);
        mergeArray(array, start, middle, end); //Merge two sub arrays
    }

}



int main(){
    return 0;    
}
