//1) wap to find gcd of two numbers using euclidean algorithm
#include <stdio.h>
int main() 
{
    int num1, num2,gcdvalue;
    printf("Enter two numbers to find gcd: ");
    scanf("%d %d", &num1, &num2);
    while (num2!= 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    gcdvalue = num1;
    printf("GCD of %d and %d is %d", num1, num2, gcdvalue);
    return 0;
}


