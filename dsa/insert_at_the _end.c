#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;  // Pointer to store the array
    int size;    // Variable to store the size of the array
    int new_element = 6;  // Element to insert at the end

    // Initial array size
    size = 5;  // Assuming initial size is 5

    // Dynamically allocate memory for the initial array
    array = (int *)malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initialize the original array
    for (int i = 0; i < size; i++) {
        array[i] = i + 1;
    }

    // Print original array
    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Resize the array to accommodate the new element
    size++; // Increase the size by 1
    array = (int *)realloc(array, size * sizeof(int));
    if (array == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Insert the new element at the end
    array[size - 1] = new_element;

    // Print updated array
    printf("Updated Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Free dynamically allocated memory
    free(array);

    return 0;
}
