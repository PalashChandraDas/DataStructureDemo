#include<stdio.h>
#define Q_SIZE 5

struct Queue {
    int head, tail;
    int arr[Q_SIZE + 1];
} q;    //q is Queue type variable

//firstly Head and Tail is zero in this Queue
void initialize() {
    q.head = 0;     //called head or front
    q.tail = 0;     //called tail or rear
}

//check if the queue is full
int isFull() {
    if((q.tail + 1) % (Q_SIZE + 1) == q.head)
        return 1;
    else
        return 0;
}

//check if the queue is empty
int isEmpty() {
    if(q.head == q.tail) //head = 2
        return 1;
    else
        return 0;
}

//adding an element
void enqueue(int item) {
    if(isFull())
        printf("Queue is full...\n");
    else {
        q.arr[q.tail] = item;
        printf("Enqueue: %d\n", item);
        q.tail = (q.tail + 1) % (Q_SIZE + 1);
    }

}

//removing an element
void dequeue() {
    if(isEmpty())
        printf("Queue is empty..\n");
    else {
        int item;
        item = q.arr[q.head];
        printf("Dequeue %d, from this queue.\n", item);
        q.head = (q.head + 1) % (Q_SIZE + 1);//2
    }
}

//display the queue
void display_queue() {
    if(isEmpty())
        printf("Queue is empty...\n");
    else {
        int i;
        printf("\nPrint the full queue:\n");
        for (i = q.head; i != q.tail; i = (i + 1) % (Q_SIZE + 1)) {
            printf("%d ", q.arr[i]);
        }
    }

}

int main() {

    initialize();

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    display_queue();

    printf("\n");
    dequeue();
    dequeue();
    display_queue();

    printf("\n");
    enqueue(60);
    enqueue(70);

    display_queue();
    printf("\n");

    return 0;
}
