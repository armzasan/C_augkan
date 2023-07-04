#include <stdio.h>

struct struct_node
{
    int data;
    int count;
    struct struct_node *link;
};

int main() {
    struct struct_node *head = NULL;  
    struct struct_node *node1 = malloc(sizeof(struct struct_node));
    node1->data = 10;
    node1->link = NULL;
    head = node1;  
    
    int count = 0;
    
    printf("Data: %d\n", head->data);  
    printf("Count: %d\n", count);

    return 0;
}
