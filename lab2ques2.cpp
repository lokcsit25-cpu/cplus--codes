/* Write a program that inputs ‘n’ integers from the user.
 Then, create a function pointer tofind the maximum value among these integers.
 The function definition itself should also usepointer for comparison */
#include <iostream>
using namespace std;
int findMax(int* arr, int n) {
    int max = *arr;  
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > max) {   
            max = *(arr + i);
        }
    }
    return max;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int (*maxFunction)(int*, int) = findMax;
    int maxValue = maxFunction(arr, n);

    cout << "Maximum value among the entered integers: " << maxValue << endl;
    return 0;
}
