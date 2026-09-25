

int getIndex(int arr[], int left, int right, int x) {
    int mid = (left + right) / 2;
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