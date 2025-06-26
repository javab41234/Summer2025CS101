#include <iostream>
using namespace std;

int main() {
    double number;
    cout << "Enter a real number: ";
    cin >> number;
    cout << "Address of the variable : " << &number << endl;
    double* ptr = &number;
    cout << "Address of the pointer : " << &ptr << endl;

    cout << "Value stored in pointer : " << ptr << endl;

    return 0;
}