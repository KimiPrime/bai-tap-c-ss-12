#include <stdio.h>

int findMaxArr(int arr[], int n);

int main() {
    int arr[5] = {1, 2, 4, 5, 3};
    printf("So lon nhat trong mang la: %d", findMaxArr(arr, 5));
    return 0;
}

int findMaxArr(int arr[], int n) {
    int max = arr[0]; 
    for (int i = 1; i < n; i++) { 
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    return max;
}
