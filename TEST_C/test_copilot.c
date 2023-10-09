#include<stdio.h>
#include<stdlib.h> // Include this header for malloc

struct node {
    int data;
    struct node *next;
}; 

struct node *head = NULL; // Define head before the functions that use it

//add data to the end of the list
void append(int data) {
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL; 
    if(head == NULL) {
        head = new_node;
    } else {
        struct node *temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

// Print function
void print() {
    struct node *temp = head; 
    while(temp != NULL) {
        printf("%d ", temp->data); // Add a space for better readability
        temp = temp->next;
    }    
    printf("\n"); // New line after printing the list
}

// Main function to print the list 
int main() {
    append(1);
    append(2);
    append(3);
    append(4);
    append(5);
    print();
    return 0;
}
