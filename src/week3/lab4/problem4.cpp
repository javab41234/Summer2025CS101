#include <iostream>
using namespace std;

int indexOfLargestElement(double array[], int size) {
    int max_index = 0;
    for (int i = 1; i < size; i++) {
        if (array[max_index] < array[i]) {
            max_index = i;
        }
    }
    return max_index;
}

int main() {
    int n;
    cin >> n;
    double arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout<<indexOfLargestElement(arr,n);
}