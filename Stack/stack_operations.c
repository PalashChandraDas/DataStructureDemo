#include<stdio.h>
#define STACK_MAX 5

int my_stack[STACK_MAX], top = -1; //Initializes the top index to -1

//Checks if Stack is Full or not
int isFull() {
    if(top >= STACK_MAX-1) //it's true when top = 4 or up
        return 1;
    else
        return 0;
}

//Checks if Stack is Empty or not
int isEmpty() {
    if(top == -1)
        return 1;
    else
        return 0;
}

void push(int item) {  //PUSH: Add an element to the top of a stack.
    if(isFull())
        printf("Stack is full!\n"); //Overflow
    else {
        printf("PUSH: %d\n", item);
        my_stack[++top] = item;
    }
}

int peek(){  //PEEK: Get the item of the top element without removing it.
    if(isEmpty())
        printf("Stack is empty!\n"); //Underflow
    else
        return my_stack[top];
}

void pop() {  //POP: Remove an item from the top of a stack.
    if(isEmpty())
        printf("Stack is empty!\n"); //Underflow
    else {
        printf("Popped %d, from this stack.\n", my_stack[top]);
        top--;
    }
}

void display_stack(){
    printf("\nPrint the full stack from Top to Bottom:\n");
    for(int i = top; i >= 0; i--){
        printf("%d\n", my_stack[i]);
    }
}


int main() {

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
