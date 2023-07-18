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
        printf("List is empty !! Deletion is not possible\n");
    } else {
        struct Node* temp = head;
        head = temp->link;
        free(temp);
        count = count - 1;
        printf("Deleted: %d\n", temp->data);
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
    Insert(22);
    Insert(30);
    Insert(24);
    Insert(20);
    printf("Linked List Before Operations : ");
    display();
    deleteHead();
    deleteHead();
    printf("Linked List After Operations : ");
    display();
    printf("count=%d",count);
    return 0;
}
