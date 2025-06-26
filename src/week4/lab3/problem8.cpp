#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers:\n";
    cin >> a >> b;
    int* ptrA = &a;
    int* ptrB = &b;
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
    cout << "After swapping:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}