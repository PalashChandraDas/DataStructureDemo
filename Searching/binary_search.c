#include<stdio.h>

int main() {
    int arr[] = {2, 4, 5, 8, 11, 12, 14, 15, 16, 20};//ascending order sorted
    int n = sizeof(arr)/sizeof(arr[0]); //length of array
    int x = 11;//declaring searching value

    int result = binary_search(arr, n, x);//calling function
    //printf("%d\n", result);

    if(result == -1) {
        printf("Not found.\n");
    } else {
        printf("Element is found at index: %d\n", result);
    }

    return 0;
}


int binary_search(int arr[], int n, int x) {

    int left, right, mid;

    left = 0; //first item
    right = n-1; //last item

    while(left <= right) {

        //mid = (left+right)/2;  //generally use it
        mid = left+(right-left)/2; // To avoid integer overflow

        if(arr[mid] == x) {
            return mid;
        }
        if(arr[mid] < x) {
            left = mid+1;
        } else {
            right = mid-1;
        }
    }
    return -1;
}
