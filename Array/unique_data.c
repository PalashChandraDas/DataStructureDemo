#include<stdio.h>

int main() {

    int i, j, n, counter = 0;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int my_array[n];
    printf("Input %d elements in the array :\n", n);


    //input data from user...
    for(i = 0; i<n; i++) {
        scanf("%d", &my_array[i]);
    }


    printf("\nUnique elements in an array is: ");
    for(i = 0; i < n; i++) {
        counter = 0;
        for(j = 0; j < n; j++) {
            if(my_array[i] == my_array[j]) { //checking duplicate data
                counter++;
            }
        }

        if(counter == 1) { //checking unique data
            printf("%d ", my_array[i]);
        }

    }
    printf("\n");


    return 0;
}
