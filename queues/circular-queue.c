#include<stdio.h>

#define SIZE 5

int queue[SIZE];

int front = -1;
int rear = -1;


void show() {
    printf("Queue: ");
    for(int i=0; i < SIZE; i++ ){
        printf("%d ", queue[i]);
    }
    printf(" front: %d,rear: %d \n",front,rear);
}


void enqueue(int value) {
    // is full
    if(front != -1 && (rear + 1) % SIZE == front)  {
        printf("Queue is full \n");
    } 
    else {
        // If queue is empty
        if(front == -1) {
            front = 0;
        }
        rear = (rear + 1) % SIZE;

        queue[rear] =  value;

    printf("\n Insert element -> %d = %d \n", rear, value );
    }
}
void dequeue() {
    if(front == -1 && rear == -1) {
        printf(" Queue is empty.\n");
        return;
    }
    queue[front] = -1;
    printf("\n Deleted element -> %d \n", front);
    front = (front + 1) % SIZE;
    // if queue empty reset
    if(front == rear) {
        printf(" Reseted queue.");
        queue[front] = -1;
        front = -1;
        rear = -1;
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
    enqueue(6);
    enqueue(7);
    enqueue(8);

    show(); 

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    
    show(); 
    return 0;
}
