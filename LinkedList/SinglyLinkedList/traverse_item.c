#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data; //item
    struct Node *next;//linking address
};
struct Node *head, *middle, *last;//like a,b,c


void print() {
    struct Node *temp;
    temp = head;
    if(temp == NULL) {
        print("Error! Empty list.");
        exit(1);
    }

    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }


}

int main() {

    head = malloc(sizeof(struct Node));
    middle = malloc(sizeof(struct Node));
    last = malloc(sizeof(struct Node));

    head->data = 10;
    middle->data = 20;
    last->data = 30;

    head->next = middle;
    middle->next = last;
    last->next = NULL;

    print();


    return 0;
}
