#include<iostream>
using namespace std;

int main(){
    // Array to reverse
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Reverse the array using two pointers
    int start = 0;
    int end = n - 1;
    
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
    // Print the reversed array
    cout << "Reversed Array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}