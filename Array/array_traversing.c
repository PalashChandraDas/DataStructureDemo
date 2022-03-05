#include <stdio.h>

int main() {
    int LA[] = {2,4,6,8,9};
    int i, size = 5;

    printf("The array elements are: ");

    for(i = 0; i < size; i++) {
        printf("%d ", LA[i]); // this is linear array.
    }
    printf("\n");

    return 0;
}
