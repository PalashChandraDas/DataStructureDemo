#include<stdio.h>

int main() {

    int arr[] = {12, 2, 4, 7, 10, 14};
    int n = sizeof(arr)/sizeof(arr[0]); //length of array
    bubble_sort(arr, n); //calling function

    return 0;
}

void bubble_sort(int arr[], int n) {
    int i, j, temp;

    for(i = 0; i<n; i++) {
        for(j = 0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                //swapping
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted array ascending order:\n");
    for(i = 0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

