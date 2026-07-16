//wap to show that if n  is a positive integer then, 1+2+3+---=n(n+1)/2 using induction method to show step too.
#include <stdio.h>
int main()
{
    // Step 1: Base Case
    printf("\n------ Principle of Mathematical Induction ------\n");

    printf("\nStep 1: Base Case (n = 1)\n");
    printf("LHS = 1\n");
    printf("RHS = 1(1+1)/2 = %d\n", (1 * (1 + 1)) / 2);

    if (1 == (1 * (1 + 1)) / 2)
        printf("Base Case is TRUE.\n");
    else
    {
        printf("Base Case is FALSE.\n");
        return 0;
    }

    // Step 2: Induction Hypothesis
    printf("\nStep 2: Induction Hypothesis\n");
    printf("Assume the formula is true for n = k.\n");
    printf("1 + 2 + 3 + ... + k = k(k+1)/2\n");

    // Step 3: Induction Step
    printf("\nStep 3: Induction Step\n");
    printf("For n = k + 1,\n");
    printf("1 + 2 + ... + k + (k+1)\n");
    printf("= k(k+1)/2 + (k+1)\n");
    printf("= (k(k+1) + 2(k+1))/2\n");
    printf("= (k+1)(k+2)/2\n");
    printf("= (k+1)((k+1)+1)/2\n");
    printf("Hence, the statement is TRUE for k+1.\n");
     return 0;
}

//wap to show that every integer greater than 1 can be written
// as a product of prime numbers using strong induction steps
#include<stdio.h>


