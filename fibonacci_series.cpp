#include <stdio.h>


int min(int x, int y) {
    return (x <= y) ? x : y;
}


int fibonacci(int arr[], int x, int n) {
    int fibMMm2 = 0;  
    int fibMMm1 = 1;  
    int fibM = fibMMm2 + fibMMm1;  
    while (fibM < n) {
        fibMMm2 = fibMMm1;
        fibMMm1 = fibM;
        fibM = fibMMm2 + fibMMm1;
    }

    int offset = -1;

    while (fibM > 1) {
        int i = min(offset + fibMMm2, n - 1);

        if (arr[i] < x) {
            fibM = fibMMm1;
            fibMMm1 = fibMMm2;
            fibMMm2 = fibM - fibMMm1;
            offset = i;
        } else if (arr[i] > x) {
            fibM = fibMMm2;
            fibMMm1 = fibMMm1 - fibMMm2;
            fibMMm2 = fibM - fibMMm1;
        } else {
            return i;
        }
    }

    if (fibMMm1 && arr[offset + 1] == x) {
        return offset + 1;
    }

    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 50, 60, 80, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 50;

    int index = fibonacci(arr, x, n);
    if (index != -1) {
        printf("Found exactly at index: %d\n", index);
    } else {
        printf("Not Found\n");
    }

    return 0;
}
