#include<stdio.h>
#define STACK_MAX 3

int my_stack[STACK_MAX], top = -1;

void push(int item) {  //PUSH: Add an element to the top of a stack.

    if(top < STACK_MAX){
        printf("PUSH: %d\n", item);
        my_stack[++top] = item;
    }
    else 
        printf("Stack is full!\n"); //Overflow
    

}

void peek() {  //PEEK: Get the value of the top element without removing it.

    if(top < 0)
        printf("Stack is empty!\n"); //Underflow
    else
        printf("%d\n", my_stack[top]);
}

void pop() {  //POP: Remove an element from the top of a stack.
    if(top < 0)
        printf("Stack is empty!\n"); //Underflow
    else {
        printf("Popped %d, from Stack.\n", my_stack[top]);
        top--;
    }

}

void display_stack() {
    printf("\nPrint the full stack from Top to Bottom:\n");
    for(int i = top; i >= 0; i--)
         printf("%d\n",my_stack[i]);

}


int main() {

    push(8);
    push(60);
    push(19);

    display_stack();

    pop();

    display_stack();

    printf("\nTop value of this Stack: ");
    peek();


    return 0;
}
