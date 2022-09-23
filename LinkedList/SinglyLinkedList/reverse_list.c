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

void reverse_displayList() {
    Node *prev_node, *current_node;

    if(head != NULL) {
        prev_node = head;//1000 (Every comment are showing for first process in LinkedList)
        current_node = head->next;//2000
        head = head->next;//2000

        prev_node->next = NULL; //NULL
        while(head != NULL) { //2000
            head = head->next;//3000
            current_node->next = prev_node;//1000

            prev_node = current_node;//2000
            current_node = head;//3000
        }
        head = prev_node;
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
    int n;
    printf("Input the number of Nodes: ");
    scanf("%d", &n);
    printf("\n");
    createNodeList(n);

    printf("\nData entered in the list are:\n");
    print_linked_list();

    printf("\nThe list in reverse are:\n");
    reverse_displayList();
    print_linked_list();

    return 0;
}
