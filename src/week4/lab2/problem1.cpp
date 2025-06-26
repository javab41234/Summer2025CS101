#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 23, 5, 67, 89, 33, 21, 78, 42, 9};
    int *ptrA = arr;

    for (int i = 0; i < 10; i++) {
        cout << "Address: " << (ptrA + i) << " Value: " << *(ptrA + i) << endl;
    }

    return 0;
}