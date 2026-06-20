// // perform set operations(union,intersection,difference ,inverse).
// // #include<stdio.h>
// // int main(){
//     // int Uset[10]={10,11,12,13,14,15,16,17,18,19};
//     // int setA[5]={12,13,14,11,15};
//     // int setB[6]={10,14,11,12,19,13};
//     // int i,j;
 
// //     // for intersection
// //     printf("intersection elements:");
// //     printf("{");
// //     int firstcomma = 1; // Flag to track first element
// //     for(i=0;i<5;i++){
// //         for (j=0;j<6;j++){
// //             if(setA[i]==setB[j]){
// //                 if(!firstcomma) {
// //                     printf(", "); // Print comma only after the first element
// //                 }
// //                 printf("%d",setA[i]);
// //                 firstcomma = 0; // First element has been printed
// //             }
// //         }
// //     }
// //     printf("}");
// // }

// //     //for union
// //     printf("\n");
// //     printf("union elements:");
// //     printf("{");
// //     int comma = 1; 
// //     for(i=0;i<5;i++){
// //         if(!comma) {
// //             printf(", "); 
// //         }
// //         printf("%d",setA[i]);
// //         comma = 0;
// //     }
// //     for(i=0;i<6 ;i++){
// //         int found=0;
// //         for (j=0;j<5;j++){
// //             if(setB[i]==setA[j]){
// //                 found=1;
// //                 break;
// //             }
// //         }
// //         if(found==0){
// //             if(!comma) {
// //                 printf(", "); // Safe guard formatting for remaining elements
// //             }
// //             printf("%d",setB[i]);
// //         }
// //     }
// //     printf("}");
// // }

// //     //for difference
// //     printf("\ndifference elements:");
// //     printf("{");
// //     int comma = 1; // Flag to track first element
// //     for(i=0;i<5;i++){
// //         int found=0;
// //         for(j=0;j<6;j++){
// //             if(setA[i]==setB[j]){
// //                 found=1;
// //                 break;
// //             }
// //         }
        
// //         if(found==0){
// //             if(!comma) {
// //                 printf(", "); // Print comma only after the first element
// //             }
// //             printf("%d",setA[i]);
// //             comma = 0;
// //         }
// //     }
// //     printf("}");
// // }
//     //for universe complement calculation (displays numbers in arr not in b)
// //     printf("\nuniverse:");
// //     printf("{");
// //     int comma = 1; // Flag to track first element
// //     for(i=0;i<8;i++){
// //         int found=0;
// //         for(j=0;j<5;j++){
// //             if(setA[i]==setB[j]){
// //                 found=1;
// //                 break;
// //             }
// //         }
        
// //         if(found==0){
// //             if(!comma) {
// //                 printf(", "); // Adds missing commas between elements in universe
// //             }
// //             printf("%d",setA[i]);
// //             comma = 0;
// //         }
// //     }
// //     printf("}");
// //     return 0;
// // }

// // // cross product of two different set. floor and ceiling function.
//  #include <stdio.h>
// int main() {
//     int setA[5] = {2, 3, 4, 1, 5};
//     int setB[5] = {1, 2, 7, 8, 9};
//     int i, j;

//     printf("Cross product: ");
//     printf("{ ");

//     for (i = 0; i < 5; i++) {
//         for (j = 0; j < 5; j++) {
//             printf("(%d,%d)", setA[i], setB[j]);

//             // Print comma only if not the last pair
//             if (!(i == 4 && j == 4)) {
//                 printf(", ");
//             }
//         }
//     }

//     printf(" }");
//     return 0;
// }

  
//for the floor and ceiling functions. 
#include<stdio.h>
#include<math.h>
int main(){
    float a=5.7;
    printf("floor of a: %.2f\n", floor(a));
    printf("ceiling of a: %.2f\n", ceil(a));

 }