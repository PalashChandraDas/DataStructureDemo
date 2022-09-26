#include<stdio.h>
typedef struct node Node;
struct node {
    int data;
    Node *next;
} *head;

void createNodeList(int n) {
    Node *current_node, *new_node;
    int num, i;

    head = (Node *)malloc(sizeof(Node));
    if(head == NULL) {
        printf("Error! Couldn't create a new Node.\n");
    } else {
        printf("Input data for node 1: ");
        scanf("%d", &num);
        head->data = num;
        head->next = NULL;
        current_node = head;

        //create 2nd to n node
        for(i = 2; i <= n; i++) {
            new_node = (Node *)malloc(sizeof(Node));
            if(new_node == NULL) {
                printf("Error! Couldn't create a new node.\n");
                break;
            } else {
                printf("Input data for node %d: ", i);
                scanf("%d", &num);
                new_node->data = num;
                new_node->next = NULL;
                current_node->next = new_node;
                current_node = current_node->next; //update node
            }

        }
    }

}

//delete last node
void lastNodeDeletion() {
    Node *current_node, *prev_node;

    if(head == NULL) {
        printf("There are no node in the list.\n");
    } else if(head->next == NULL) {
        free(head);
        head = NULL;
    } else {
        current_node = head;
        prev_node = head;
        while(current_node->next != NULL) {
            prev_node = current_node;
            current_node = current_node->next;
        }
        prev_node->next = NULL;
        free(current_node);
        current_node = NULL;
    }

}

void print_linked_list() {
    Node *current_node;
    current_node = head;
    while(current_node != NULL) {
        printf("Data : %d\n", current_node->data);
        current_node = current_node->next;
    }
}

int main() {
    int n, num, pos;
    printf("Input the number of nodes: ");
    scanf("%d", &n);
    createNodeList(n);

    printf("\nAfter entered data in the list are:\n");
    print_linked_list();

    lastNodeDeletion();
    printf("\nAfter delete last node in the list are:\n");
    print_linked_list();
    return 0;
}
