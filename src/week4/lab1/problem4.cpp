#include <iostream>
using namespace std;

const int SIZE = 4;

double sumMajorDiagonal(const double m[][SIZE]) {
    double sum = 0.0;
    for (int i = 0; i < SIZE; ++i) {
        sum += m[i][i];
    }
    return sum;
}

int main() {
    double matrix[SIZE][SIZE] = {
        {1.0, 2.0, 3.0, 4.0},
        {5.0, 6.0, 7.0, 8.0},
        {9.0, 10.0, 11.0, 12.0},
        {13.0, 14.0, 15.0, 16.0}
    };

    double result = sumMajorDiagonal(matrix);
    cout << "Sum of major diagonal = " << result << endl;

    return 0;
}
