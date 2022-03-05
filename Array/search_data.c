#include <stdio.h>
int main() {

    int i, size = 6;
    char value;

    printf("Please enter a character to search: ");
    scanf("%c", &value);

    int searching = 0;
    char name[10] = {'P', 'A', 'L', 'A', 'S', 'H'};

    for(i = 0; i<size; i++) {
        if(name[i] == value) {
            searching++;// searching = 1
            break;
        }
    }
    if(searching == 1) {
        printf("Found.\nThe value is: %c\n", value);
    } else {
        printf("Not Found!\n");
    }

    return 0;
}
