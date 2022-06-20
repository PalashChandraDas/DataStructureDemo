#include<stdio.h>

int main(){
    int arr[] = {12, 22, 3, 5, 6, 11, 9};
    int n = sizeof(arr)/sizeof(arr[0]); //length of array

    insertion_sort(arr, n); //calling function

    return 0;
}

void insertion_sort(int arr[], int n){
    int i, j, item;

    for(i = 1; i < n; i++){
        item = arr[i];
        j = i - 1;
    
    while(j >= 0 && arr[j]>item){
        arr[j+1] = arr[j];
        j = j - 1;
    }
    arr[j+1] = item;
}

    printf("\nSorted array ascending order:\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

}
