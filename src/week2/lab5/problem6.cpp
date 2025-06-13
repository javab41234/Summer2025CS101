#include <iostream>
using namespace std;

int main() {
    int num, reversed_num = 0;
    cout << "Enter a positive integer: ";
    cin >> num;
    while (num != 0) {
        reversed_num = reversed_num * 10 + num % 10;
        num /= 10;
    }
    cout << "Reversed number: " << reversed_num << endl;
    return 0;
}