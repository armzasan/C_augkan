#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *link;
};

struct head {
    struct Node *top; 
    int count;
};

struct head myStack = {NULL, 0}; 

void push(struct head *myStack, int val) {
    struct Node *newNode = malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("NO push element. \n");
        return;
    }
    newNode->data = val;

    if (myStack->top == NULL) {
        newNode->link = NULL;
    } else {
        newNode->link = myStack->top;
    }

    myStack->top = newNode;
    myStack->count++;

    printf("Pushed element = %d\n", val);
    printf("count = %d\n", myStack->count);
}

int main() {
    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);
    push(&myStack, 40);

    printf("count all: %d\n", myStack.count);

    return 0;
}
