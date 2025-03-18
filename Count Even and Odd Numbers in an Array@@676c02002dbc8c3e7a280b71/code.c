// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read the number of elements

    int arr[n];
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read the array elements
        if (arr[i] % 2 == 0)
            evenCount++; // Count even numbers
        else
            oddCount++;  // Count odd numbers
    }

    printf("%d %d\n", evenCount, oddCount); // Print counts of even and odd numbers

    return 0;
}