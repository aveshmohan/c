#include <stdio.h>

void deleteElement(int arr[], int *n, int index) {
    if (index < 0 || index >= *n) {
        printf("Invalid index!\n");
        return;
    }

    
    for (int i = index; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }


    (*n)--;
}

void printArray(int arr[], int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {3, 8, 12, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original ");
    printArray(arr, n);

    
    int indexToDelete = 2;
    deleteElement(arr, &n, indexToDelete);

    printf("After deletion at index %d: ", indexToDelete);
    printArray(arr, n);

    return 0;
}
