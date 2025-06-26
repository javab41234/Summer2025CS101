#include <iostream>
#include <ctime>
using namespace std;

int simpleRandom(int seed, int i, int j) {
    return (seed * (i + 1) * (j + 2)) % 1001;
}

void printMatrix(int n) {
    int seed = time(0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int num = simpleRandom(seed, i, j);
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the matrix (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid size." << endl;
    } else {
        cout << "Generated " << n << "x" << n << " matrix:\n";
        printMatrix(n);
    }

    return 0;
}