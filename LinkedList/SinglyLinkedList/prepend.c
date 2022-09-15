#include<stdio.h>
typedef struct node Node; //struct node = Node
struct node {
    int data; //data part of node
    Node *next; //address part of node
} *st_node; //name of the structure type variable

//create node
void createNodeList(int n) {
    Node *current_node, *fn_node;
    int num, i;
    st_node = (Node *)malloc(sizeof(Node)); //memory allocate for first node

    if(st_node == NULL) {
        printf("Error! Couldn't create a new node.\n");
        exit(1);
    } else {
        printf("Input the data of node 1: ");
        scanf("%d", &num);
        st_node->data = num;
        st_node->next = NULL;
        current_node = st_node; //pass the address of first node in current_node

        //create 2nd to n node
        for(i = 2; i <= n; i++) {
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
                current_node->next = fn_node; //links previous node
                current_node = current_node->next;
            }
        }
    }
}

//insert a new node at the beginning of Linked List
void prepend(int num) {
    Node *fn_node;
    fn_node = (Node *)malloc(sizeof(Node)); //memory allocate for new node
    if(fn_node == NULL) {
        printf("Error! Couldn't create a new node. Because, memory can not be allocated.\n");
        exit(1);
    } else {
        fn_node->data = num; //Links the data part
        fn_node->next = st_node; //Links the address part
        st_node = fn_node; //Makes st_node as first node
    }
}

//display list
void print_linked_list() {
    Node *current_node;
    if(st_node == NULL) {
        printf("No data found in the empty list.\n");
    } else {
        current_node = st_node;
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
    printf("\nData entered in the Linked List are :\n");
    print_linked_list();

    printf("\nInput data to insert at the beginning of the Linked List: ");
    scanf("%d", &num);
    
    prepend(num);
    printf("\nData after inserted in the Linked List are :\n");
    print_linked_list();

    return 0;
}
