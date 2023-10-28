#include <stdio.h>
#include "factorial.h"
int main() {
    int n;
    printf("enter a positive integer");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        long long result = factorial(n);
        printf("Factorial of %d = %lld\n", n, result);
    }

    return 0;
}
