/*
Name - Bhuvnesh Verma 
Branch - AIML
Sec - D
Roll No - 28
*/
#include <stdio.h>
//Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap arr[i] and arr[minIndex]
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
int linearSearch(int arr[], int n, int key) { //Linear Search
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1; // Element not found
}
int binarySearch(int arr[], int left, int right, int key) { //Binary Search
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Element not found
}
int main() {
    int arr[10];
    int n = 10;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    selectionSort(arr, n);
    printf("Array after sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int choice, key;
    printf("Choose a search method:\n");
    printf("1. Linear Search\n");
    printf("2. Binary Search\n");
    scanf("%d", &choice);
    printf("Enter the element you want to find: ");
    scanf("%d", &key);
    int result = -1;
    if (choice == 1) {
        result = linearSearch(arr, n, key);
    } else if (choice == 2) {
        result = binarySearch(arr, 0, n - 1, key);
    }
    if (result != -1) {
        printf("Element %d found at index %d.\n", key, result);
    } else {
        printf("Element %d not found in the array.\n", key);
    }
    return 0;
}
