#include<stdio.h>
#include<stdlib.h> 

struct node {
    int data;
    struct node *next;
}; 

struct node *head = NULL; 

void append(int data) {
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL; 
    if(head == NULL) {
        head = new_node;
    } else {
        struct node *rear = head;
        while(rear->next != NULL) {
            rear = rear->next;
        }
        rear->next = new_node;
    }
}

// Print function
void print() {
    struct node *rear = head; 
    while(rear != NULL) {
        printf("%d ", rear->data); 
        rear = rear->next;
    }    
    printf("\n"); 
}

int main() {
    append(1);
    append(2);
    append(5);
    append(3);
    append(4);
    append(9);
  
    print();
    return 0;
}
