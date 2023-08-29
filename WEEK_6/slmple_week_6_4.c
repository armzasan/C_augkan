#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* link;
};

struct head {
    struct Node* front;
    struct Node* rear;
    int count;
};

struct head myQueue = {NULL, NULL, 0};

void EnQueue(int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->link = NULL;

    if (myQueue.rear == NULL) {
        myQueue.front = newNode;
        myQueue.rear = newNode;
    } else {
        myQueue.rear->link = newNode;
        myQueue.rear = newNode;
    }

    myQueue.count++;
}

void DeQueue() {
    if (myQueue.front == NULL) {
        printf("Queue is empty.\n");
        return;
    }

    struct Node* temp = myQueue.front;
    myQueue.front = myQueue.front->link;

    if (myQueue.front == NULL) {
        myQueue.rear = NULL;
    }

    free(temp);
    myQueue.count--;
}

void display() {
    struct Node* temp = myQueue.front;
    printf("Queue: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\nTotal nodes: %d\n", myQueue.count);
}

int main() {
    EnQueue(10);
    EnQueue(20);
    EnQueue(30);
    display(); 

    DeQueue();
    DeQueue();
    display();  

    return 0;
}
