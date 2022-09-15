#include<stdio.h>
typedef struct node Node; //struct node = Node
struct node {
    int data; //node of data part
    Node *next; //node of address part
} *head; //declare the name of structure type variable

//create node
void createNodeList(int n) {
    Node *current_node, *new_node;
    int num, i;
    head = (Node *)malloc(sizeof(Node));
    if(head == NULL) {
        printf("Error! Couldn't create a new node.\n");
        exit(1);
    } else {
        printf("Input data for node 1: ");
        scanf("%d", &num);
        head->data = num;
        head->next = NULL;
        current_node = head;

        for(i = 2; i <= n; i++) {
            new_node = (Node *)malloc(sizeof(Node));
            if(new_node == NULL) {
                printf("Error! Couldn't create a node.\n");
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

//Node count
int node_count() {
    int counter = 0;
    Node *current_node;
    current_node = head;

    while(current_node != NULL) {
        counter++; //counting node here
        current_node = current_node->next; //advances the position of current_node
    }
    return counter;
}

//display list
void print_linked_list() {
    Node *current_node;

    if(head == NULL) {
        printf("No data found in the linked List.\n");
    } else {
        current_node = head;
        while(current_node != NULL) {
            printf("Data = %d\n", current_node->data); //prints the data of current node
            current_node = current_node->next;  //advances the position of current node
        }
    }
}

int main() {
    int n, totalNode;
    printf("Input the number of nodes: ");
    scanf("%d", &n);

    createNodeList(n);
    printf("\nData entered in the list are :\n");
    print_linked_list();
    totalNode = node_count();
    printf("\nTotal number of nodes = %d\n", totalNode);
    return 0;
}
