#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    double* arr = new double[n];
    cout << "Enter " << n << " double values:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }

    cout << "Array in reverse order:" << endl;
    for (int i = n - 1; i >= 0; i--) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}