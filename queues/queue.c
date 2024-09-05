#include <stdio.h>
#include <stdio.h>
#define SIZE 5



int front = -1;
int rear = -1;
int data[SIZE];

void enqueue(int value) {
    if(rear == SIZE - 1) {
        printf("Queue is full");
    } else {
        if(front == -1) {
            front = 0;
        }
        rear++;
        data[rear]= value;
    }
}

void dequeue() {
    front++;
    if(front > rear) {
        front = -1;
        rear = -1;
    }
}

void display() {
    if(front == -1) {
        printf("Queue is empty");
    } else {
        for(int i=front; i<= rear;i++){
            printf("Index %d: %d \n",i, data[i]);
        }
    }

}



int main() {

    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    dequeue();
    dequeue();
    dequeue();
    display();

    
    return 0;
}
