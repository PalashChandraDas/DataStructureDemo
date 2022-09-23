#include<stdio.h>
typedef struct node Node; //struct node = Node
struct node {
    int data; //data part of node
    Node *next; //address part of node
} *head; //name of the structure type variable

//create node
void createNodeList(int n) {
    Node *current_node, *new_node;
    int num, i;
    head = (Node *)malloc(sizeof(Node)); //memory allocate for first node

    if(head == NULL) {
        printf("Error! Couldn't create a new node.\n");        
    } else {
        printf("Input the data of node 1: ");
        scanf("%d", &num);
        head->data = num;
        head->next = NULL;
        current_node = head; //pass the address of first node in current_node

        //create 2nd to n node
        for(i = 2; i <= n; i++) {
            int num;
            new_node = (Node *)malloc(sizeof(Node)); //memory allocate for next node
            if(new_node == NULL) {
                printf("Error! Couldn't create a node.\n");
                break;
            } else {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &num);
                new_node->data = num;
                new_node->next = NULL;
                current_node->next = new_node; //links previous node
                current_node = current_node->next;
            }
        }
    }
}

//insert a new node at the end of Linked List
void append(int num) {
    Node *current_node, *new_node;
    
    //new_node = (Node *)malloc(sizeof(Node)); //memory allocate for new node
    if(new_node == NULL) {
        printf("Error! Couldn't create a new node. Because, memory can not be allocated.\n");       
    } else {
        current_node = head;
        while(current_node->next != NULL) {
            current_node = current_node->next;
        }
        current_node->next = new_node; //Links the address part
        new_node->data = num; //Links the data part
        new_node->next = NULL;
    }
}

//display list
void print_linked_list() {
    Node *current_node;
    if(head == NULL) {
        printf("No data found in the empty list.\n");
    } else {
        current_node = head;
        while(current_node != NULL) {
            printf("Data = %d\n", current_node->data); // prints the data of current node
            current_node = current_node->next; // advances the position of current node
        }
    }
}

int main() {
    int n, num;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    createNodeList(n);

    printf("\nData entered in the Linked List are:\n");
    print_linked_list();

    printf("\nInput data to insert at the end of the Linked List: ");
    scanf("%d", &num);
    append(num);
    printf("\nData after inserted in the Linked List are:\n");
    print_linked_list();

    return 0;
}
