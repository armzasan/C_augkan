#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* link;
};

struct Node* head = NULL;
int count = 0;

void Insert(int a) {
    struct Node* newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = a;
    newNode->link = NULL; 
    if(count == 0) {
        head = newNode;
        count++;
    }
    else {
        struct Node* current = head;
        for(int i = 0; i < count - 1; i++) {
            current = current->link;
        }
        current->link = newNode;
        count++;
    }
} 

void deleteHead() {
    if (head == NULL) {
        printf("List Is Empty!!! Deletion is not possible\n");
    } else {
        struct Node* temp1 = head;
        struct Node* temp2;
        if (temp1->link == NULL) {
            head = NULL;
            free(temp1);
            count = count - 1;
        } else {
            for (int i = 1; i < count - 1; i++) {
                temp1 = temp1->link;
            }
            temp2 = temp1->link;
            temp1->link = NULL;
            free(temp2);
            count = count - 1;
        }
    }
}


void display() {
    struct Node* node = head;
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->link;
    }
    printf("\n");
}
int main() {
    Insert(5);
    Insert(10);
    printf("Before: ");
    display();
    deleteHead();
    printf("After: ");
    display();
    printf("count=%d",count);
    return 0;
}

