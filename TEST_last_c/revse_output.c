#include <stdio.h>
#include <stdlib.h>

struct headnode{
    int count;
    struct datanode *top;
};

struct datanode{
    int data;
    struct datanode *link;
};

void push(int b, struct headnode *plist){
     struct datanode *newNode;
     newNode = (struct datanode*)malloc(sizeof(struct datanode)); 
     newNode->data = b;
     newNode->link = plist->top;
     plist->top = newNode;
     plist->count++;
}

void pop(struct headnode *plist){
    if(plist->top != NULL){
        struct datanode *temp = plist->top;
        plist->top = temp->link;
        printf("%d ", temp->data);  // Print the data as we pop
        free(temp);
        plist->count--;
    }
}

void reverse(struct headnode *plist){
    while(plist->count > 0){
        pop(plist);
    }
    printf("\n");
}

int main() {
    struct headnode *pList;
    pList = (struct headnode*)malloc(sizeof(struct headnode));
    pList->count = 0;
    pList->top = NULL;

    push(1,pList);
    push(2,pList);
    push(3,pList);
    push(4,pList);
    push(5,pList); 

    reverse(pList);

    free(pList);  // Don't forget to free the memory allocated for the headnode
    return 0;
}
