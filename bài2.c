#include <stdio.h>

void printArray(int arr[], int size) {
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50}; 
    int n = sizeof(arr) / sizeof(arr[0]); 

    printArray(arr, n);

    return 0;
}
