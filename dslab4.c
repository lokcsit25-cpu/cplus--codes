//2) wap to find bezouts coefficients of two numbers using extended euclidean algorithm
#include <stdio.h>
int bezout(int a, int b, int *x, int *y) {
    if (b == 0) {
        *x = 1;
        *y = 0;
        return a;
    }
    int x1, y1;
    int gcdvalue = bezout(b, a % b, &x1, &y1);
    *x = y1;
    *y = x1 - (a / b) * y1;
    return gcdvalue;
}

int main() {
    int num1, num2, s, t;
    printf("Enter two numbers to find Bezout's coefficients: ");
    scanf("%d %d", &num1, &num2);
    bezout(num1, num2, &s, &t);
    printf("Bezout's coefficients are: s = %d, t = %d\n", s, t);
    return 0;
}

