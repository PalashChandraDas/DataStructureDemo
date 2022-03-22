#include <stdio.h>

int binary_search(int arr[], int size, int item) {

    int left, right, mid;
    left = 0;
    right = size-1;

    while(left <= right) {
        mid = (left+right)/2;

        if(arr[mid] == item) {
            return mid;
        }
        if(arr[mid] < item) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // -1 means not found

}

int main() {

    int size = 6;
    int arr[] = {1, 2, 5, 10, 55, 100};
    int item = 10;

    int result = binary_search(arr, size, item);// function_calling

    if(result == -1){
        printf("Not found.\n");
    }
    else{
        printf("Element is found at index: %d\n", result);
    }


    return 0;
}
