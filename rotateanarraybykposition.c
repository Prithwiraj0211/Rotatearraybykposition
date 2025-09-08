#include <stdio.h>

void rotateLeft(int arr[], int n, int k) {
    k = k % n;  // handles if k is larger than n
    int temp[n];

    for (int i = 0; i < n; i++) {
        temp[i] = arr[(i + k) % n];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

void rotateRight(int arr[], int n, int k) {
    k = k % n;
    int temp[n];

    for (int i = 0; i < n; i++) {
        temp[i] = arr[(i - k + n) % n];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    printf("Original: ");
    printArray(arr, n);

    rotateLeft(arr, n, k);
    printf("Left Rotate by %d: ", k);
    printArray(arr, n);

    int arr2[] = {1, 2, 3, 4, 5, 6, 7};
    rotateRight(arr2, n, k);
    printf("Right Rotate by %d: ", k);
    printArray(arr2, n);

    return 0;
}
