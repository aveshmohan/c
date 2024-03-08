#include <stdio.h>

void insertSorted(int arr[], int *size, int element) {
    int i = *size - 1; // Index to traverse the array

    // Move elements greater than element to one position ahead
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert the element at the correct position
    arr[i + 1] = element;

    // Update the size of the array
    (*size)++;
}

int main() {
    int arr[10] = {1, 3, 5, 7, 9}; // Example sorted array
    int size = 5; // Size of the array

    int newElement = 4; // Element to insert
    insertSorted(arr, &size, newElement);

    printf("Sorted Array after inserting %d: ", newElement);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
