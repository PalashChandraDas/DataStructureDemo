#include<stdio.h>
#define STACK_MAX 100
#include<string.h>

struct Stack {
    int top;
    int arr[STACK_MAX];
} st; //st is Stack type variable

void initialize() {
    st.top = -1;
}

int isFull() {
    if(st.top >= STACK_MAX - 1)
        return 1;
    else
        return 0;
}

int isEmpty() {
    if(st.top == -1)
        return 1;
    else
        return 0;
}

void push(char item) {
    if(isFull())
        printf("Stack is full...\n");
    else {
        st.arr[st.top+1] = item;
        st.top++;
    }
}

void pop() {
    if(isEmpty())
        printf("Stack is empty!\n");
    else {
        st.top--;
    }
}


int main() {

    char input[100];
    int i, length;
    initialize();

    printf("Enter a string of paranthesis:\n");
    gets(input);
    length = strlen(input);

    for(i = 0; i < length; i++) {
        if(input[i] == '(' || input[i] == '{' || input[i] == '[')
            push(input[i]);
        else if(input[i] == ')' || input[i] == '}' || input[i] == ']')
            pop();
        else {
            printf("\nError : %s is invalid character !!\n", input);
            return 0;
        }

    }

    if(isEmpty())
        printf("\n%s is valid paranthesis expression.\n", input);
    else
        printf("\n%s is invalid paranthesis expression.\n", input);

    return 0;
}
