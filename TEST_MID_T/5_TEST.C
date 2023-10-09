#include <stdio.h>
#include <stdlib.h>

struct Ptr {
    int id;
    float score;
    struct Ptr *next;
};

struct Ptr *p = NULL, *q = NULL;

void addNode(int id, float score) {
    struct Ptr *newNode = (struct Ptr*)malloc(sizeof(struct Ptr));
    newNode->id = id;
    newNode->score = score;
    newNode->next = NULL;

    if (p == NULL) {
        p = newNode;
        q = newNode;
    } else {
        q->next = newNode;
        q = newNode;
    }
}

int countNodes(struct Ptr *head) {
    int count = 0;
    struct Ptr *current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

int main() {
    addNode(1001, 6);
    addNode(1003, 5);
    addNode(1006, 7);
    addNode(1009, 4);

    printf("Total nodes in the linked list: %d\n", countNodes(p));
    return 0;
}
