#include <iostream>
#include "getIndex.hpp"
#include "getIntInput.hpp"
#include "getRandomStep.hpp"

const int size = 50;
const int min = 0;
const int maxStep = 5; //above 1

int main(){

    std::cout << "Creating an array with size " << size << "... \n";

    int value = min;
    int arr[size];
    for (int i = 0; i < size; i++){
        arr[i] = value;
        value += getRandomStep(maxStep);
        std::cout << arr[i] << " ";
    }
    
    std::cout << "\n";

    int x = getIntInput("Enter a number to search for the index of: ", min, arr[size - 1]);
    std::cout << "Searching for the index of " << x << "...\n";
    int index = getIndex(arr, 0, size - 1, x);
    std::cout << "Your element " << x << " is at index " << index << ".\n";
    
    return 0;
}