#include <stdio.h>

int secondLargest(int arr[], int size) {
    int largest, second;

    // Initialize largest and second using the first two elements
    if (arr[0] > arr[1]) {
        largest = arr[0];
        second = arr[1];
    } else {
        largest = arr[1];
        second = arr[0];
    }

    for (int i = 2; i < size; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] < largest) {
            second = arr[i];
        }
    }

    return second;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = secondLargest(arr, size);
    printf("The second largest element is %d\n", result);
    return 0;
}
