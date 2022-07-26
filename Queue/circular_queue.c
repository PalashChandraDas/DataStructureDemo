#include <stdio.h>
#define Q_SIZE 3

struct Queue {
    int head, tail;
    int arr[Q_SIZE + 1];
} q;    //q is Queue type variable

void initialize() {
    q.head = 0;
    q.tail = 0;
}

int isFull() {
    if((q.tail + 1) % (Q_SIZE + 1) == q.head)
        return 1;
    else
        return 0;
}

int isEmpty() {
    if(q.head == q.tail)
        return 1;
    else
        return 0;
}

void enqueue(int item) {
    if(isFull())
        printf("Queue is full..\n");
    else {
        q.arr[q.tail] = item;
        printf("QUEUE: %d\n", item);
        q.tail = (q.tail + 1) % (Q_SIZE + 1);
    }
}

void dequeue() {
    if(isEmpty())
        printf("Queue is empty.\n");
    else {
        int item;
        item = q.arr[q.head];
        printf("\n%d is dequeue from this queue.\n", item); //delete first item
        q.head = (q.head + 1) % (Q_SIZE + 1);
    }
}




int main() {
    initialize();
    enqueue(5);
    enqueue(10);
    enqueue(11);
    enqueue(19);

    dequeue();

    return 0;
}
