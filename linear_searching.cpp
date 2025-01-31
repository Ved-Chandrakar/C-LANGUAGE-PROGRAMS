#include <stdio.h>
int linearSearch(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

int main() {
  
    int arr[] = {10, 20, 30, 50, 60, 80, 100};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 50;
    int result = linearSearch(arr, size, value);
    if (result != -1) {
     printf("Value found at index: %d\n", result);
    } else {
        printf("Value not found\n");
    }

    return 0;
}
