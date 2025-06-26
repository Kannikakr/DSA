#include<iostream>

using namespace std;
int main(){
    
    int arr[10] = {1,3,5,4,2,7,9,8,0,6};
    int n = 10;
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         if(i<=j){
    //           swap(arr[i], arr[j]);
    //         }
    //     }
    // } we can use nested loop or we can just swap thw first n/2 elements

    for(int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - 1 - i]);
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
    return 0;
}

// Time Complexity	O(n)
// Space Complexity O(1)