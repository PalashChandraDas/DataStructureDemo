#include<stdio.h>
typedef struct node Node; //struct node = Node
struct node {
    int data; //node of data part
    Node *next; //node of address part
} *st_node; //declare the name of structure type variable

//create node
void createNodeList(int n) {
    Node *current_node, *fn_node;
    int num, i;
    st_node = (Node *)malloc(sizeof(Node));
    if(st_node == NULL) {
        printf("Error! Couldn't create a new node.\n");
        exit(1);
    } else {
        printf("Input data for node 1: ");
        scanf("%d", &num);
        st_node->data = num;
        st_node->next = NULL;
        current_node = st_node;

        for(i = 2; i <= n; i++) {
            fn_node = (Node *)malloc(sizeof(Node));
            if(fn_node == NULL) {
                printf("Error! Couldn't create a node.\n");
                break;
            } else {
                printf("Input data for node %d: ", i);
                scanf("%d", &num);
                fn_node->data = num;
                fn_node->next = NULL;
                current_node->next = fn_node;
                current_node = current_node->next;
            }
        }
    }
}

//Node count
int node_count() {
    int counter = 0;
    Node *current_node;
    current_node = st_node;

    while(current_node != NULL) {
        counter++; //counting node here
        current_node = current_node->next; //advances the position of current_node
    }
    return counter;
}

//display list
void print_linked_list() {
    Node *current_node;

    if(st_node == NULL) {
        printf("No data found in the linked List.\n");
    } else {
        current_node = st_node;
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
