#include<stdio.h>
int main() {
    int t, size, i, item;

    printf("How many times will you take input: ");
    scanf("%d", &t);
    while(t--) {
        printf("\nEnter the size of array: ");
        scanf("%d", &size);

        int arr[size];
        printf("Please enter %d elements in the array: ");
        for(i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
        }

        printf("Please enter the item to search: ");
        scanf("%d", &item);

        int result = linear_search(arr, size, item);
        if(result == -1) {
            printf("\nNot found!!\n");
        } else {
            printf("\nFound.\nThe position of value is: %d\n", result+1);
        }

    }
    return 0;
}

int linear_search(int arr[], int size, int item) {
    int i;
    for(i = 0; i < size; i++) {
        if(arr[i] == item) {
            return i;
        }
    }
    i = -1;
    return i;
}
