#include <stdio.h>
#define MAX_SIZE 100
typedef struct Node
{
    char data;
    struct Node *next;
} Node;

Node nodes[MAX_SIZE];

int main()
{
    for (int i = 0; i < MAX_SIZE; i++)
    {
        nodes[i].data = 0;
        nodes[i].next = NULL;
    }

    nodes[0].data = 'A';
    nodes[0].next = &nodes[1];

    nodes[1].data = 'R';
    nodes[1].next = &nodes[2];

    nodes[2].data = 'M';
    nodes[2].next = NULL;

    Node *current = &nodes[0];
    while (current != NULL)
    {
        printf("%c ", current->data);
        current = current->next;
    }
    printf("\n");

    return 0;
}
