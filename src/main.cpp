#include "getRandomStep.hpp"
#include "getIntInput.hpp"
#include "getIndex.hpp"
#include <iostream>

const int size = 50;
const int maxStep = 10;

int main(){

    int arr[size];
    int val = 0;

    for(int i = 0; i < size; i++){
        arr[i] = val;
        val += getRandomStep(maxStep);
    }

    std::cout << "Array: \n";
    for(int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    int x = getIntInput("Enter a number to search for: ", 0, arr[size - 1]);

    std::cout << "Searching for index of " << x << "...\n";

    std::cout << "Index of " << x << ": " << getIndex(arr, 0, size - 1, x) << "\n";

    return 0;
}