#include "../include/merge.hpp"

int mergeSort (int arr[]){
    
    int length = sizeof(arr);
    if (length <= 1) return 0;

    int mid = length / 2;
    int leftArr[mid];
    int rightArr[length - mid];

    int i = 0;
    int j = 0;

    for (; i< length; i++){
        if (i < mid){
            leftArr[i] = arr[i];
        } else {
            rightArr[j] = arr[i];
            j++;
        }
    }

    mergeSort(leftArr);
    mergeSort(rightArr);
    merge(leftArr, rightArr, arr);
}

