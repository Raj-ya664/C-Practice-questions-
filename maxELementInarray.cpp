#include <iostream>
using namespace std;

int main() {
    // program to find the maximum element in an array
    int ans = -1 ;
    int arr[] = {12, 2, 2, 2, 33, 33, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        if (arr[i] > ans) {
            ans = arr[i];
        }
    }

    cout << ans << endl;
    return 0;
}

// Removed stray trailing braces and leftover cout
// cout << ans; // This line is removed





