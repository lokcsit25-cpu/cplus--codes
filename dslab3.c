//1) wap to find gcd of two numbers using euclidean algorithm
#include <stdio.h>

int main() 
{
    int num1, num2, gcdvalue;
    printf("Enter two numbers to find gcd: ");
    scanf("%d %d", &num1, &num2);

    int a = num1, b = num2; // keep originals for final output

    printf("\nSteps of Euclidean Algorithm:\n");
    while (b != 0) {
        int temp = b;
        int remainder = a % b;
        printf("%d = %d x (%d) + %d\n", a, b, a / b, remainder);
        a = temp;
        b = remainder;
    }

    gcdvalue = a;
    printf("\nGCD of %d and %d is %d\n", num1, num2, gcdvalue);
    return 0;
}



