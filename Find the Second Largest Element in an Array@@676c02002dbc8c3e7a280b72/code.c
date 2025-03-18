// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read the number of elements

    if (n < 2) {
        printf("-1\n"); // If there are less than 2 elements, second largest is not possible
        return 0;
    }

    int arr[n], largest, second_largest;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read the array elements
    }

    largest = second_largest = -1; // Initialize with a small value

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) { 
            second_largest = largest; 
            largest = arr[i]; 
        } else if (arr[i] > second_largest && arr[i] != largest) { 
            second_largest = arr[i]; 
        }
    }

    if (second_largest == -1) {
        printf("-1\n"); // If no second largest element exists
    } else {
        printf("%d\n", second_largest);
    }

    return 0;
}