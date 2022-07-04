#include<stdio.h>
#define STACK_MAX 5

struct Stack {
    int top;
    int arr[STACK_MAX];
} st;

//Initializes the top index to -1, that means firstly stack is empty.
void initialize() {
    st.top = -1;
}

//Checks if Stack is Full or not
int isFull() {
    if(st.top >= STACK_MAX-1)
        return 1;
    else
        return 0;
}

//Checks if Stack is Empty or not
int isEmpty() {
    if(st.top == -1)
        return 1;
    else
        return 0;
}

void push(int item) {
    if (isFull())
        printf("Stack is Full...\n");
    else {
        st.arr[st.top+1] = item;
        printf("PUSH: %d\n", item);
        st.top++; //last value store = 4
    }
}

int peek() {
    if(isEmpty())
        printf("Stack is empty!!\n");
    else
        return st.arr[st.top]; //last index = 4
}

void pop() {
    if(isEmpty())
        printf("Stack is empty!!\n");
    else {
        printf("Popped %d, from this stack.\n", st.arr[st.top]); // last index = 4
        st.top--; //last value store = 3
    }
}

void display_stack() {
    printf("\nPrint the full stack from Top to Bottom:\n");
    for(int i = st.top; i >= 0; i--) {
        printf("%d\n", st.arr[i]);
    }
}


int main() {

    initialize();

    push(20);
    push(10);
    push(5);
    push(3);
    push(2);
    push(22);

    printf("\nTop item of this stack: %d\n", peek());
    pop();
    display_stack();

    return 0;
}
