#include <stdio.h>

#define MAX_SIZE 10 // Maximum size of the array

void insertAtIndex(int arr[], int *size, int index, int element) {
    // Check if the array is full
    if (*size >= MAX_SIZE) {
        printf("Array is full. Cannot insert element.\n");
        return;
    }

    // Shift elements to the right from the end to the index
    for (int i = *size; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element at the specified index
    arr[index] = element;

    // Update the size of the array
    (*size)++;
}

int main() {
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5}; // Example array
    int size = 5; // Current size of the array

    int index = 4; // Index to insert the element
    int newElement = 10; // Element to insert

    // Insert the element at the specified index
    insertAtIndex(arr, &size, index, newElement);

    // Print the array after insertion
    printf("Array after inserting %d at index %d: ", newElement, index);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
