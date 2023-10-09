#include <stdio.h>

void push(char element, char stack[], int *top, int stackSize) {
    if (*top == stackSize - 1) {
        printf("The stack is already full. \n");
        return;
    }
    stack[++(*top)] = element;
}

void pop(char stack[], int *top, int stackSize) {
    if (*top == -1) {
        printf("The stack is empty. \n");
        return;
    }
    printf("Element popped: %c \n", stack[(*top)--]);
}

int main() {
    int stackSize = 6;
    char stack[stackSize];
    int top = -1;
    
    push('1', stack, &top, stackSize);
    printf("Element on top: %c\n", stack[top]);
    
    push('2', stack, &top, stackSize);
    push('3', stack, &top, stackSize);
    push('4', stack, &top, stackSize);
   
    
    printf("Element on top: %c\n", stack[top]);
    
    pop(stack, &top, stackSize);
     printf("Element on top: %c\n", stack[top]);
    
    return 0;
}