//wap to print truth table of conjunction(and) and disjunction(or) operation.
#include <stdio.h>

int main() {
    enum truthvalue {F=0, T=1};
    int p, q;

    // Conjunction (AND) and Disjunction (OR)
    printf("Truth Table for Conjunction (^ / AND) and Disjunction (V / OR)\n");
    printf("-------------------------------------------------------------\n");
    printf(" P | Q | (P ^ Q) | (P V Q)\n");
    printf("-------------------------------------------------------------\n");

    for (p = F; p <= T; p++) {
        for (q = F; q <= T; q++) {
            // Print P
            if (p == T) printf(" T |");
            else printf(" F |");

            // Print Q
            if (q == T) printf(" T |");
            else printf(" F |");

            // Print (P ^ Q)
            if (p && q) printf("    T    |");
            else printf("    F     |");

            // Print (P V Q)
            if (p || q) printf("    T\n");
            else printf("    F\n");
        }
    }
//wap to print truth table of tautology and contradiction operation.
    printf("\nTruth Table for Tautology and Contradiction\n");
    printf("-------------------------------------------\n");
    printf(" P | ~P | (P ^ ~P) | (P V ~P)\n");
    printf("-------------------------------------------\n");

    for (p = F; p <= T; p++) {
        int notP = !p;

        // Print P
        if (p == T) printf(" T |");
        else printf(" F |");

        // Print ~P
        if (notP == T) printf(" T  |");
        else printf(" F  |");

        // Print (P ^ ~P) → Contradiction
        if (p && notP) printf("    T    |");
        else printf("    F     |");

        // Print (P V ~P) → Tautology
        if (p || notP) printf("    T\n");
        else printf("    F\n");
    }

    return 0;
}




    
    