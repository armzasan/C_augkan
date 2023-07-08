#include <stdio.h>
#include <stdlib.h>

struct Node
{
    char nickname;
    struct Node *next;
};

int main() {
    struct Node *head = NULL;
    struct Node *node1 = malloc(sizeof(struct Node));
    node1->nickname = 'A';
    node1->next = NULL;
    head = node1;

    struct Node *node2 = malloc(sizeof(struct Node));
    node2->nickname = 'R';
    node2->next = NULL;
    node1->next = node2;

    struct Node *node3 = malloc(sizeof(struct Node));
    node3->nickname = 'M';
    node3->next = NULL;
    node2->next = node3;

    printf("Nickname: ");
    struct Node *current = head;
    while (current != NULL) {
        printf("%c", current->nickname);
        current = current->next;
    }
    printf("\n");

    // Freeing the allocated memory
    struct Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
