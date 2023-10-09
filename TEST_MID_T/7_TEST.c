#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    char info;
    struct Node *next;
} Node;

int main()
{

    Node *head = (Node *)malloc(sizeof(Node));
    Node *second = (Node *)malloc(sizeof(Node));
    Node *third = (Node *)malloc(sizeof(Node));
    Node *fourth = (Node *)malloc(sizeof(Node));

    head->info = '4';
    head->next = second;

    second->info = '6';
    second->next = third;

    third->info = '8';
    third->next = fourth;

    fourth->info = '9';
    fourth->next = NULL;

    Node *current = head;
    while (current != NULL)
    {
        printf("%c -> ", current->info);
        current = current->next;
    }
    printf("NULL\n");

    free(head);
    free(second);
    free(third);
    free(fourth);

    return 0;
}
