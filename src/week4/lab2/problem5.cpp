#include <iostream>
using namespace std;

void sumArrays(const double* arr1, const double* arr2, double* sum, int size) {
    for (int i = 0; i < size; i++) {
        *(sum + i) = *(arr1 + i) + *(arr2 + i);
    }
}

int main() {
    int size;
    cin >> size;
    double arr1[size], arr2[size], result[size];

    for (int i = 0; i < size; i++) cin >> arr1[i];
    for (int i = 0; i < size; i++) cin >> arr2[i];

    sumArrays(arr1, arr2, result, size);

    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }

    return 0;
}