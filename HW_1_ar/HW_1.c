#include <stdio.h>

void teerapat(int arr[], int *n, int position) {
    if (position >= *n || position < 0) {
        printf("Position is out of bounds of the array.\n");
        return;
    }

    for (int i = position; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    *n = *n - 1;
}

int main() {
    int arr[100] = {10,9,8,7,6};
    int n = 5;

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    teerapat(arr, &n, 2);  // Delete element at position 2

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
