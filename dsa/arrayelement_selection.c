#include <stdio.h>

void printSelectedElements(int arr[], int n, int start, int end) {
    if (start < 0 || end >= n || start > end) {
        printf("Invalid range!\n");
        return;
    }

    printf("Selected elements: ");
    for (int i = start; i <= end; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {11, 22, 25, 34, 64, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    
    int start = 1;
    int end = 3;
    printSelectedElements(arr, n, start, end);

    return 0;
}
