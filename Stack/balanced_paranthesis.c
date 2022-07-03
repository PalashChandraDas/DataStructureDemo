#include<stdio.h>
#define STACK_MAX 100
#include <string.h>

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

void push(int item) {
    if(isFull())
        printf("Stack is full!\n");
    else {
        my_stack[++top] = item;
    }
}

int pop() {
    if(isEmpty())
        printf("Stack is empty!\n");
    else {
        return my_stack[top];
        top--;
    }
}


int main() {

    char input_string[100];
    int i, length;

    printf("Enter a string of paranthesis: ");
    gets(input_string);
    length = strlen(input_string);

    for(i = 0; i < length; i++){
        if(input_string[i] == '(' || input_string[i] == '{' || input_string[i] == '[')
            push(input_string[i]);
        else if(input_string[i] == ')' || input_string[i] == '}' || input_string[i] == ']')
            pop();
        else{
            printf("Error: Invalid Character!!\n");
            return 0;
        }

    }

    if(isEmpty())
        printf("Valid Paranthesis Expression.\n");
    else
        printf("Invalid Paranthesis Expression.\n");

    return 0;
}
