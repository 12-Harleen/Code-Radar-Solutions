#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read the number of elements in the array
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read the array elements
    }

    // Check if the array is sorted in non-decreasing order
    int sorted = 1;  // Assume it is sorted
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {  // If any element is smaller than the previous one, it's not sorted
            sorted = 0;
            break;
        }
    }

    if (sorted)
        printf("Sorted\n");
    else
        printf("Not Sorted\n");

    return 0;
}