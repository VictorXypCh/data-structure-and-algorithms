#include <stdio.h>
#include <stdlib.h>

#define MAX 10

struct Stack {
    int items[MAX];
    int top;
}; 
typedef struct Stack Stack;

//Push: Add an element to the top of a stack
//Pop: Remove an element from the top of a stack
//IsEmpty: Check if the stack is empty
//IsFull: Check if the stack is full
//Peek: Get the value of the top element without removing it

void createStack(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    if(s->top == -1) {
        return 1;
    }

    return 0;
}

int isFull(Stack *s) {
    if(s->top >= MAX -1) {
        return 1;
    }
    return 0;
}

void peek(Stack *s) {
    if(!isEmpty(s)) {
        printf("%d \n", s->top);
    } else {
        printf("No data");
    }
}

void push(Stack *s, int value) {
    if(!isFull(s)) {
        s->top++;
        s->items[s->top] = value;
    } else {
        printf("STACK FULL \n");
    }
}

void pop(Stack *s) {
    if(!isEmpty(s)){
        s->top--;
    }
}

void printStack(Stack *s) {
      printf("Stack: ");
    for(int i=0; i <= s->top; i++ ){
        printf("%d ",s->items[i]);
    }
    printf("\n");
}

int main() {

    Stack *s = (Stack *) malloc(sizeof(Stack));

    createStack(s);


    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    push(s, 5);
    printStack(s);

    return 0;
}
