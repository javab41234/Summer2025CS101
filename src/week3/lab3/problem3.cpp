#include <iostream>
using namespace std;

float series(int n) {
    if (n == 1) {
        return 1.0/3;
    }
    return 1.0 /(n*(n+2))+series(n-1);
}

int main() {
    int n;
    cout << "Enter a value for n: ";
    cin >> n;

    cout << "The sum of the series is: " << series(n)  << endl;

    return 0;
}