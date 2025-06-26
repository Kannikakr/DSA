#include<iostream>
using namespace std;

int main() {
    int arr[10] = {1, 3, 5, 4, 2, 7, 9, 8, 0, 6};
    int n = 10;

    int min = arr[0];
    int max = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;

    return 0;
}


// Time Complexity	O(n)
// Space Complexity O(1)