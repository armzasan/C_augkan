#include <stdio.h>
#include <stdlib.h> 

struct headnode
{
    int count;
    struct datanode* head;

};

struct datanode
{
    int data; 
    struct datanode* link;
};


void InsertFile(struct headnode *list, int a){
    struct datanode* newNode;
    newNode = (struct datanode*)malloc(sizeof(struct datanode));
    newNode->data = a;
    newNode->link+NULL;
    if(list->count==0) {
        list->head=newNode;
        list->count++

    }
    else
    {
        
    }
    
} 
int main() {
    struct headnode *pList;
    pList= (struct headnode*)malloc(sizeof(struct headnode));
    pList->count=0;
    pList->head=NULL;
    InsertFile(pList,5);
    InsertFile(pList,10);
    printf("%d->",pList->head->data);
    printf("%d",pList->head->link->data);
    printf("\ncount=%d",pList->count);

}