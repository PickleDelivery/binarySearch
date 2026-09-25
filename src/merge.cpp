#include <iostream>
#include <array>
#include "getArraySize.hpp"

int merge (std::array<int> leftArr, std::array<int> rightArr, std::array<int> arr){

    std::cout << "Called merge...\n";
    
    int leftSize = getArraySize(arr) / 2;
    int rightSize = getArraySize(arr) - leftSize;
    int i = 0, left = 0, right = 0;

    while(left < leftSize && right < rightSize){
        if (leftArr[left] < rightArr[right]){
            arr[i] = leftArr[left];
            i++;
            left++;
        } else {
            arr[i] = rightArr[right];
            i++;
            right++;
        }

        while (left < leftSize){
            arr[i] = leftArr[left];
            i++;
            left++;
        }
        while (right < rightSize){
            arr[i] = rightArr[right];
            i++;
            right++;
        }
    }

    
    
    return 0;
}