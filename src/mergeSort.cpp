#include "merge.hpp"
#include <iostream>
#include <array>
#include "getArraySize.hpp"


int mergeSort (std:array<int> arr){

    std::cout << "Called mergeSort on this array";

    

    
    int length = getArraySize(arr);

    std::cout << " with size of " << length << ":\n";

    
    for (int i = 0; i <= length; i++){
        std::cout << arr[i];
        std::cout << ", ";
    }
    std::cout << "\n";
    

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

    return 0;
}

