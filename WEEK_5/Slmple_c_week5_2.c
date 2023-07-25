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
int main() {
    enqueue(5);
    enqueue(10);
    enqueue(15);
    enqueue(20);
    enqueue(25);
    enqueue(30);
        return 0;
}
