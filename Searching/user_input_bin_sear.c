#include<stdio.h>
int main() {

    int i, n, x;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers in array with ascending order: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter your search item: ");
    scanf("%d", &x);

    int result = binary_search(arr, n, x);//calling function
    //printf("%d\n\n", result);

    if(result == -1) {
        printf("Not found!!\n");
    } else {
        printf("Yes, found.\nThe index of number is: %d\n", result);
    }

    
    return 0;
}


int binary_search(int arr[], int n, int x) {

    int left, right, mid;
    left = 0;
    right = n-1;

    while(left <= right) {
        //mid = (left+right)/2; //generally use it
        mid = left+(right-left)/2; // To avoid integer overflow
        if(arr[mid] == x) {
            return mid;
        }
        if(arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    int i = -1;
    return i;
}
