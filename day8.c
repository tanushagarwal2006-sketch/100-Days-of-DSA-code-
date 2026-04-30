#include <stdio.h>

// Recursive function to compute a^b
long long power(int a, int b) {
    if (b == 0)
        return 1;          // base case: a^0 = 1
    return a * power(a, b - 1);
}

int main() {
    int a, b;

    // Input
    scanf("%d %d", &a, &b);

    // Output
    printf("%lld\n", power(a, b));

    return 0;
}