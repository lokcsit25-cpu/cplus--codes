// to find intersection of two sets
#include<stdio.h>
int main(){
	int Uset[10]={10,11,12,13,14,15,16,17,18,19};
	int setA[4]={11,12,13,18};
	int setB[4]={14,16,18,19};
	int i,j;
	printf("Intersection of two sets: { ");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(setA[i]==setB[j]){
				printf("%d ",setA[i]);
			}
		}
	}
	printf("}");
	
}
// to find the union of two sets
// #include <stdio.h>

// int main() {
//     int i, j, k = 0, common;
//     int Uset[10]={10,11,12,13,14,15,16,17,18,19};
// 	int setA[4]={11,12,13,18};
// 	int setB[4]={14,16,18,19};
// 	int unionset[8];

//     for(i = 0; i < 4; i++) {
//          unionset[k++] = setA[i];
//     }

//     for(i = 0; i < 4; i++) {
//         common = 0;
//         for(j = 0; j < 4; j++) {
//             if(setB[i] == setA[j]) {
//                 common = 1; 
//                 break;
//             }
//         }
//         if(common == 0) {
//             unionset[k++] = setB[i];
//         }
//     }

//     printf("\nUnion of two sets: { ");
//     for(i = 0; i < k; i++) {
//         printf("%d ", unionset[i]);
//     }
//     printf("}");

//     return 0;
// }
