#include<stdio.h>
typedef struct node Node;
struct node {
    int data;
    Node *next;
} *st_node; //name of the structure type variable

void createNodeList(int n) {
    Node *current_node, *fn_node;
    int num, i;
    st_node = (Node *)malloc(sizeof(Node)); //memory allocate for first node
    printf("Input the data of node 1: ");
    scanf("%d", &num);

    if(st_node == NULL) {
        printf("Error! Couldn't create a new node.\n");
        exit(1);
    } else {
        st_node->data = num;
        st_node->next = NULL;
        current_node = st_node; //pass the address of first node in current_node

        for(i = 2; i <= n; i++) { //create 2nd to n node
            int num;
            fn_node = (Node *)malloc(sizeof(Node)); //memory allocate for next node
            if(fn_node == NULL) {
                printf("Error! Couldn't create a node.\n");
                break;
            } else {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &num);
                fn_node->data = num;
                fn_node->next = NULL;
                current_node->next = fn_node;
                current_node = current_node->next; //pass the address of next node
            }

        }
    }
}

void print_linked_list() {
    Node *current_node;
    current_node = st_node;
    while(current_node != NULL) {
        printf("Data = %d\n", current_node->data);
        current_node = current_node->next;
    }
}

int main() {
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n");
    print_linked_list();

    return 0;
}
