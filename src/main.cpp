#include "mergeSort.hpp"
#include "getRandomInt.hpp"
#include "getIntInput.hpp"
#include <iostream>

const int size = 5;
const int minElementValue = 1;
const int maxElementValue = 200;

int main(){

    std::cout << "Creating an sorted array with " << size << " elements:\n";
    int arr[size];

    for (int i = 0; i <= size; i++){
        arr[i] = getRandomInt(minElementValue, maxElementValue);
        std::cout << arr[i];
        std::cout << ", ";
    }
    std::cout << "\n";

    std::cout << "function 'sizeof' calculated that the array size is " << sizeof(arr) << "\n";

    std::cout << "Sorting the array:\n";

    mergeSort(arr);

    std::cout << "Sorted!!!\n";

    for (int i = 0; i <= size; i++){
        std::cout << arr[i];
        std::cout << ", ";
    }
    std::cout << "\n";
    
    int x = getIntInput("Please enter the number, the index of which you would like to find: ", minElementValue, maxElementValue);



    return 0;
}