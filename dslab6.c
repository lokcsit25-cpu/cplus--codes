// //wap to find permutations of my name
// #include<stdio.h>
// #include<string.h>
// int fact(int n)
// {
//     if(n==0 || n==1)
//         return 1;
//     else
//         return n*fact(n-1);
// }
// int main()
// {
//     char name[20]="LOKRAJ";
//     int n = strlen(name);
//     int permutations = fact(n);
//     printf("Number of Permutations of %s are: %d\n", name, permutations);
//     return 0;
// }
//write a C program to generate the first n rows of Pascal's triangle
#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            printf("  ");
        }
        long val = 1; // The first number in every row is always 1

        for (int j = 0; j <= i; j++) {
            printf("%ld", val);
            val = val * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}


