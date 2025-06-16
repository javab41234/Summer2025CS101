#include <iostream>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int result = multiply(num1, num2);
    cout << "Product: " << result << endl;

    return 0;
}
