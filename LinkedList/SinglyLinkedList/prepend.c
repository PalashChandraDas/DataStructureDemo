#include<stdio.h>
typedef struct node Node;
struct node {
    int data; //data part
    Node *next; //address part
};

//create a node
Node *create_node(int item, Node *next) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    if(new_node == NULL) {
        printf("Error! Couldn't create a new node.\n");
        exit(1);
    }
    new_node->data = item; //initialize data
    new_node->next = next; //initialize address of the next node
}

//insert a node at the beginning
Node *prepend(Node *head, int item) {
    Node *new_node = create_node(item, head);
    return new_node;
}

//traversing node here
void print_linked_list(Node *head) {
    Node *current_node = head;
    while(current_node != NULL) {
        printf("%d ", current_node->data);
        current_node = current_node->next;
    }
    printf("\n");
}

int main() {
    Node *head, *n;
    n = create_node(10, NULL);//first node calling here
    head = n; //store first_node address here
    head = prepend(head, 12); // a new_node insert at the beginning

    print_linked_list(head);

    return 0;
}
