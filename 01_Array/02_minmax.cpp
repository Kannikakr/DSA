#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 1, 3 , 5,
                7, 9, 11, 0, 4, 2, 6 };
    int arr_size = 6;

    int max = arr[0];
    int min = arr[1];

    for (int i = 1;i < arr_size;i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    cout << "MIN: " << min << " MAX: " << max;
}