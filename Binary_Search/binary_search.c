#include <stdio.h>

int binary_search(int arr[], int size, int item) {

    int low, high, mid;
    low = 0;
    high = size-1;

    while(low <= high) {
        mid = (low+high)/2;

        if(arr[mid] == item) {
            return mid;
        }
        if(arr[mid] < item) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1; // -1 means not found

}

int main() {

    int arr[] = {1, 2, 5, 10, 55, 100};
    int size = sizeof(arr) / sizeof(arr[0]); //array size
    int item = 10;

    int result = binary_search(arr, size, item);

    if(result == -1) {
        printf("Not found.\n");
    } else {
        printf("Element is found at index: %d\n", result);
    }


    return 0;
}
