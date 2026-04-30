#include <stdio.h>

int main() {
    int n;

    // Input size
    scanf("%d", &n);

    int arr[n];

    // Input array (sorted)
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Edge case
    if(n == 0) return 0;

    // Two-pointer approach
    int j = 0;  // points to last unique element

    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    // Print unique elements (0 to j)
    for(int i = 0; i <= j; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}