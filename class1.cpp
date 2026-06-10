// wap that reads n integers in an array.then create a function that searches for an integer x in an array
//the function should display search unsuccessful if x is not found in the array and display the index of x if it is found in the array
#include<iostream>
using namespace std;
int search(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}
int main() {
    int n, x;
    cout << "Enter the number of integers: ";
    cin >> n;
    
    int arr[n]; // Declare an array of size n
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Read integers into the array
    }
    
    cout << "Enter the integer to search for: ";
    cin >> x;
    
    int result = search(arr, n, x);
    if (result != -1) {
        cout << "Search successful! The index of " << x << " is: " << result << endl;
    } else {
        cout << "Search unsuccessful! " << x << " not found in the array." << endl;
    }
    
    return 0;
}