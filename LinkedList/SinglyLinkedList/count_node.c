#include<stdio.h>
typedef struct node Node; //struct node = Node
struct node {
    int data; //data part
    Node *next; //address part
};

//create a node
Node *create_node(int item, Node *next) {
    Node *new_node = (Node *)malloc(sizeof(Node)); //memory allocate here
    if(new_node == NULL) {
        printf("Error! Couldn't create a new node.\n");
        exit(1);
    }
    new_node->data = item; //initialize data
    new_node->next = next; //initialize address of the next node
}

//insert a node at the end
Node *append(Node *head, int item) {
    Node *new_node = create_node(item, NULL); //memory allocate here
    if(head == NULL) { //checking head is empty?
        return new_node;
    }
    Node *current_node = head;
    while(current_node->next != NULL) {
        current_node = current_node->next;
    }
    current_node->next = new_node; //store new_node of address here
    return head;
}

//count node
void count(Node *head) {
    Node *current_node = head;
    int counter = 0;
    while(current_node != NULL) {
        counter++;
        current_node = current_node->next;
    }
    printf("Total Node = %d\n", counter);
}

int main() {
    Node *head, *n;
    n = create_node(20, NULL);
    head = n;
    head = append(head, 9);
    head = append(head, 7);
    head = append(head, 5);

    count(head);

    return 0;
}
