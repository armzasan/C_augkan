#include <stdio.h>

void delete_element(int arr[], int *n, int position) {
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
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5;

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    delete_element(arr, &n, 2);  // Delete element at position 2

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
