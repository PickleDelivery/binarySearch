//#include <iostream>

int getIndex(int arr[], int left, int right, int x) {
    //std::cout << "[DEBUG] checking between left: " << left << ", and right: " << right << "\n";

    if (arr[right] == x) return right;

    int mid = (left + right) / 2;

    //std::cout << "[DEBUG] calculated mid: " << mid << "\n";

    if (arr[mid] == x){
        return mid;
    } else {
        if (arr[mid] > x){
            return getIndex(arr, left, mid, x);
        } else {
            return getIndex(arr, mid, right, x);
        }
    }
}