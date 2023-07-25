#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue is FULL!!\n");
        return;
    } else {
        rear++;
        queue[rear] = value;
        printf("Enqueued: %d\n", value);  // แสดงข้อมูลที่ถูกเพิ่มเข้าไปใน Queue
        if (front == -1) {
            front = 0;
        }
    }
}
void dequeue() {
    if (front == -1) {
        printf("Queue is EMPTY!!\n");
        return;
    } else {
        printf("Dequeued: %d\n", queue[front]);
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front++;
        }
    }
}

int main() {
    enqueue(5);
    enqueue(10);
    enqueue(15);
    enqueue(20);
    enqueue(25);
    enqueue(30);

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();  
    return 0;
        
}
