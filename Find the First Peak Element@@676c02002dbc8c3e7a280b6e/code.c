// Your code here...
#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    if (n == 1) return arr[0];  // If only one element, it's the peak

    // Check the first element
    if (arr[0] > arr[1]) 
        return arr[0];

    // Check the middle elements
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i];
        }
    }

    // Check the last element
    if (arr[n - 1] > arr[n - 2]) 
        return arr[n - 1];

    return -1;  // No peak found
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findFirstPeak(arr, n));

    return 0;
}