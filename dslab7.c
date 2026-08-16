// wap to generate first 10 numbers of sequence using recurrece relation
//(use fibonacci series and display the output
// #include<stdio.h>
// int fibo(int num){
//     if(num==0)
//         return 0;
//     else if(num==1)
//         return 1;
//     else
//         return fibo(num-1)+fibo(num-2);
// }
// int main(){
//     int num;
//     printf("First 10 numbers of Fibonacci series using recurrence relation F(n-1)+F(n-2) are:\n");
//     for(num=0;num<10;num++){
//         printf("%d ",fibo(num));
//     }
//     return 0;
// }

//wap to implement  binary search algorithm on sorted array.
#include <stdio.h>

int binarySearch(int arr[], int size, int search) {
    int left = 0;
    int right = size - 1;

    while (left <= right) 
	{
        int mid = left + (right - left) / 2;

        if (arr[mid] == search) {
            return mid; 
        }
        else if (arr[mid] < search) {
            left = mid + 1; 
        }
        else {
            right = mid - 1; 
        }
    }
    return -1; 
}

int main() {

    int arr[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = 10;
    int search;

    printf("The Sorted array is : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nEnter the number to search: ");
    scanf("%d", &search);

    int result = binarySearch(arr, size, search);
    if (result != -1) {
        printf("Element %d found at index= %d\n", search, result);
    } else {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}


