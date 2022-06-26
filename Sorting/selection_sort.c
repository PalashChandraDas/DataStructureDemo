#include<stdio.h>

int main() {
    int arr[] = {10, 2, 4, 55, 6, 9, 22, 8, 77, 33, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]); //length of array

    selection_sort(arr, n); //calling function

    return 0;
}

void selection_sort(int arr[], int n) {
    int i, j, index_min, temp;

    for(i = 0; i < n-1; i++) {
        index_min = i;

        for(j = i+1; j < n; j++) {
            if(arr[j] < arr[index_min]) {
                index_min = j;
            }
        }

        if(index_min != i) {
            //swapping
            temp = arr[i];
            arr[i] = arr[index_min];
            arr[index_min] = temp;
        }
    }

    printf("\nSorted array ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

}

