#include <stdio.h>

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array to the right by K positions
void rotateRight(int arr[], int n, int k) {
    k = k % n; // Handle cases where K > N
    if (k == 0) return;

    reverse(arr, 0, n - 1);    // Step 1: Reverse entire array
    reverse(arr, 0, k - 1);    // Step 2: Reverse first K elements
    reverse(arr, k, n - 1);    // Step 3: Reverse remaining N-K elements
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
   
}

// Main function
int main() {
    int n, k;
    
    // Input size of the array
    scanf("%d", &n);
    
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input number of rotations
    scanf("%d", &k);

    // Rotate the array
    rotateRight(arr, n, k);

    // Print the rotated array
    printArray(arr, n);

    return 0;
}