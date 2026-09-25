int merge (int leftArr[], int rightArr[], int arr[]){
    
    int leftSize = sizeof(arr) / 2;
    int rightSize = sizeof(arr) - leftSize;
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