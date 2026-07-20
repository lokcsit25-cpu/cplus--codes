//wap to show that if n  is a positive integer then, 1+2+3+---=n(n+1)/2 using induction method to show step too.
#include <stdio.h>
// Function to compute sum iteratively (LHS)
int iterative_sum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

// Function to compute sum using formula (RHS)
int formula_sum(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    // Step 1: Base Case (n=1)
    printf("\nStep 1) Base Case (n=1)\n\n");
    int baseLHS = iterative_sum(1);
    int baseRHS = formula_sum(1);
    printf("LHS = 1\n");
    printf("RHS = 1*(1+1)/2 = %d\n", baseRHS);
    if (baseLHS == baseRHS)
        printf("Base case holds true.\n");
    else
        printf("Base case failed.\n");

    // Step 2: Induction Hypothesis
    printf("\nStep 2) Induction Hypothesis\n\n");
    int k = n;
    printf("Assume the formula is true for n = k = %d)\n", k);
    printf("LHS = 1+...+%d = %d\n", k, iterative_sum(k));
    printf("RHS = %d*(%d+1)/2 = %d\n", k, k, formula_sum(k));

    // Step 3: Induction Step (prove for k+1)
    printf("\nStep 3) Induction Step (n = k+1 = %d)\n\n", k+1);
    int lhs = iterative_sum(k+1);
    int rhs = formula_sum(k+1);
    printf("LHS = 1+...+%d = %d\n", k+1, lhs);
    printf("RHS = %d*(%d+1)/2 = %d\n", k+1, k+1, rhs);

    if (lhs == rhs)
        printf("Induction step holds true. Hence proved!!!\n");
    else
        printf("Induction step failed.\n");

    return 0;
}




//wap to show that every integer greater than 1 can be written
// as a product of prime numbers using strong induction steps
#include <stdio.h>
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
void primeFactorization(int n) {
    int i;
    printf("%d = ", n);
    for (i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d", i);
            n /= i;
            if (n > 1) printf(" x ");
        }
    }
    printf("\n");
}
int main() {
    int n;  
    printf("Enter an integer greater than 1: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Please enter an integer greater than 1.\n");
        return 0;
    }
	printf("\n----STRONG INDUCTION METHOD ----\n");
    printf("\nStep 1) Base Case (n = 2)\n");
    printf("2 is prime . Hence for n=2 it is true.  \n");
    printf("\n\nStep 2) Base Case (n = 3)\n");
    printf("3 is prime. Hence for n=3 it is true. ");
    printf("\n\nStep 3) Induction Hypothesis\n");
    printf("Let P(k) is true for all integers k such that n = k= %d.\n",n-1);
    printf("i.e. every integer from 2 to %d can be written as a product of prime numbers.\n",n-1);
    printf("\nStep 4) Induction Step (n = k+1 = %d)\n", n);
    if (isPrime(n)) {
        printf("%d is prime.\n", n);
        printf("So, %d = %d (product of prime numbers).\n", n, n);
    } else {
        printf("%d is composite.\n", n);
        printf("By the induction hypothesis, its factors can be written as: ");
        primeFactorization(n);
    }
    printf("Therefore, P(%d) is true.\n", n);
    printf("Hence, by Strong Induction, every integer greater than 1 can be written as a product of prime numbers.\n");
	return 0;
}



