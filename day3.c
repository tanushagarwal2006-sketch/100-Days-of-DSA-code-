#include <stdio.h>

int main() {
    int n, k;

    // Input size
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input key
    scanf("%d", &k);

    int comparisons = 0;
    int found_index = -1;

    // Linear Search
    for(int i = 0; i < n; i++) {
        comparisons++;
        if(arr[i] == k) {
            found_index = i;
            break;
        }
    }

    // Output
    if(found_index != -1) {
        printf("Found at index %d\n", found_index);
    } else {
        printf("Not Found\n");
    }

    printf("Comparisons = %d\n", comparisons);

    return 0;
}