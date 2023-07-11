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
    newNode->link = list->head;
    list->head = newNode;
    list->count++;
} 
int main() {
    struct headnode *pList;
    pList= (struct headnode*)malloc(sizeof(struct headnode));


}