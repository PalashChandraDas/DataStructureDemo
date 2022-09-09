#include<stdio.h>
typedef struct node Node;
struct node {
    int data;
    Node *next;
};

Node *create_node(int item, Node *next) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    if(new_node == NULL) {
        printf("Error! Couldn't create a new Node.\n");
        exit(1);
    }
    new_node->data = item;
    new_node->next = next;
    return new_node;
}

Node *append(Node *head, int item) {
    Node *new_node = create_node(item, NULL);
    Node *current_node = head;
    while(current_node->next != NULL) {
        current_node = current_node->next;
    }
    current_node->next = new_node;
    return head;
}

int search(Node *head, int item) {
    Node *current_node = head;
    int index = 0;
    // traverse till then end of the linked list
    while(current_node != NULL) {
        if(current_node->data == item) {
            return index;
        }
        current_node = current_node->next;
        index++;
    }
    return -1;
}

int main() {
    Node *head, *n;
    int item;

    n = create_node(11, NULL);
    head = n;
    head = append(head, 5);
    head = append(head, 53);
    head = append(head, 50);
    head = append(head, 66);
    head = append(head, 9);
    head = append(head, 10);
    head = append(head, 88);

    printf("Enter element to search: ");
    scanf("%d", &item);
    int result = search(head, item);//function calling here.

    if(result == -1) {
        printf("Item not found!\n");
    } else {
        printf("\nFound.\nThe position of item is: %d\n", result+1);
    }
    return 0;
}
