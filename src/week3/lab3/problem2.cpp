#include <iostream>
using namespace std;

double sum_series(int n) {
    if (n == 1) {
        return 1;
    }
    return 1.0 / (n * n) + sum_series(n - 1);
}

int main() {
    int n;
    cout << "Enter a value for n: ";
    cin >> n;

    cout << "The sum of the series is: " << sum_series(n)  << endl;

    return 0;
}