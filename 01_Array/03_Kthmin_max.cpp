
class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(), arr.end());
        return arr[k-1];
    }
};


class Solution {
  public:
    // arr : given array
    // k : find kth largest element and return using this function
    int kthlargest(vector<int> &arr, int k) {
        // Sort in ascending order
        sort(arr.begin(), arr.end());
        
        // The k-th largest is at position (n - k)
        return arr[arr.size() - k];
    }
};