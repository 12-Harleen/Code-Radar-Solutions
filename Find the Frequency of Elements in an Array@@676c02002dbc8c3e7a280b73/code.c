// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read the number of elements

    int arr[n], freq[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read the array elements
        freq[i] = -1; // Initialize frequency array with -1 (indicating unprocessed)
    }

    // Count frequencies
    for (int i = 0; i < n; i++) {
        if (freq[i] == -1) { // If element is unprocessed
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0; // Mark duplicate element
                }
            }
            freq[i] = count; // Store frequency
        }
    }

    // Print the unique elements with their frequencies
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}