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
    new_node->next = next; //initialize address
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

//traversing linked list here
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
    head = append(head, 20); //2nd node
    head = append(head, 25); //3rd node
    head = append(head, 30); //4th node
    print_linked_list(head);

    return 0;
}
