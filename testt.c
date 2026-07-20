#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    printf("\nDemonstrating truth of the formula:\n");
    printf("1 + 2 + ... + %d\n\n", n);

    // Calculate sum step by step
    printf("Step-by-step addition:\n");
    for(i = 1; i <= n; i++) {
        sum += i;
        printf("After adding %d, sum = %d\n", i, sum);
    }

    // Formula result
    int formula = n * (n + 1) / 2;

    printf("\nFinal sum by calculation = %d\n", sum);
    printf("Sum by formula = %d*(%d+1)/2 = %d\n", n, n, formula);

    if(sum == formula) {
        printf("\n✅ Verified: Both results are equal.\n");
    } else {
        printf("\n❌ Verification failed.\n");
    }

    return 0;
}
