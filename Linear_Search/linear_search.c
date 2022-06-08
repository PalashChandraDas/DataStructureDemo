#include<stdio.h>

int main() {

    int arr[] = {10, 22, 4, 5, 6}; //my array
    int n = sizeof(arr)/sizeof(arr[0]); //length of array
    int x = 5;//declare searching value

    int result = linear_search(arr, n, x); //calling function

    printf("%d\n", result);

    return 0;
}


int linear_search(int arr[], int n, int x) {

    int i;

    for(i = 0; i<n; i++) {
        if(arr[i] == x) {
            return i; //index
        }
    }

    i = -1;
    return i; //out of array

}
