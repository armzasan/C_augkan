#include <stdio.h>



typedef struct Node {
    char NAME[50];      
    int AGE;             
    struct Node *Prt;  
} Node;

int main() {
    Node node1;
    node1.AGE = 25;
    strcpy(node1.NAME, "A");
    node1.Prt = NULL; 
    Node node2;
    node2.AGE = 21;
    strcpy(node2.NAME, "B");
    node2.Prt = NULL;
    node1.Prt = &node2;
    printf("Node 1: NAME = %s, AGE = %d, Prt = %p\n", node1.NAME, node1.AGE, node1.Prt);
    printf("Node 2: NAME = %s, AGE = %d, Prt = %p\n", node2.NAME, node2.AGE, node2.Prt);

    return 0;
}
