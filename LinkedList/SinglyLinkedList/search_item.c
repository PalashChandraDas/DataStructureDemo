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

//search an item from Linked List
int search(int num) {
    int index = 0;
    Node *current_node;
    current_node = head;
    while(current_node != NULL) {
        if(current_node->data == num) {
            return index;
        }
        current_node = current_node->next;
        index++;
    }
    return -1;
}

int main() {
    int n, num, result;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    createNodeList(n);

    printf("\nInput data to search: ");
    scanf("%d", &num);
    result = search(num);

    if(result == -1) {
        printf("Data not found.\n");
    } else {
        printf("Data found at node %d\n", result+1);
    }

    return 0;
}
