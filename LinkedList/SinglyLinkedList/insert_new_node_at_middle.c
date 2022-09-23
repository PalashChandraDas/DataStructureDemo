#include<stdio.h>
typedef struct node Node;
struct node {
    int data;
    Node *next;
} *head;

void createNodeList(int n) {
    Node *current_node, *new_node;
    int num, i;

    head = (Node*) malloc(sizeof(Node));
    if(head == NULL) {
        printf("Error! Couldn't create a new Node.\n");
    } else {
        printf("Input data for node 1: ");
        scanf("%d", &num);
        head->data = num;
        head->next = NULL;

        current_node = head;
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
                current_node = current_node->next;
            }
        }
    }

}

void insertNodeAtMiddle(int num, int pos) {
    Node *current_node, *new_node;

    new_node = (Node *)malloc(sizeof(Node)); //12598 (These comments are showing for imaginary)
    if(new_node == NULL) {
        printf("Error! Couldn't create a new node.\n");
    } else {
        current_node = head; //1000
        new_node->data = num;
        new_node->next = NULL;

        pos--; //2
        while(pos != 1) {
            current_node = current_node->next; //2000
            pos--; //1
        }
        new_node->next = current_node->next; //3000
        current_node->next = new_node; //12598
    }

}

void print_linked_list() {
    Node *current_node;

    if(head == NULL) {
        printf("No data found in the list.\n");
    } else {
        current_node = head;
        while(current_node != NULL) {
            printf("Data = %d\n", current_node->data);
            current_node = current_node->next;
        }
    }

}

int main() {
    int n, num, pos;
    printf("Input the number of Nodes: ");
    scanf("%d", &n);
    printf("\n");
    createNodeList(n);

    printf("\nData entered in the list are:\n");
    print_linked_list();

    printf("\nInput data to insert in the middle of the list: ");
    scanf("%d", &num);
    printf("Input the position to insert new node: ");
    scanf("%d", &pos); //2
    insertNodeAtMiddle(num, pos);
    printf("\nAfter insert the new list are:\n");
    print_linked_list();

    return 0;
}
