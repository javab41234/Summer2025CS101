#include <iostream>
using namespace std;

const int SIZE = 4;

double sumColumn(const double m[][SIZE], int rowSize, int columnIndex) {
    double sum = 0.0;
    for (int i = 0; i < rowSize; i++) {
        sum += m[i][columnIndex];
    }
    return sum;
}

int main() {
    int rowSize = 5;
    double matrix[5][SIZE] = {
        {5, 3, 1, 6},
        {-5, 2, 1, 5},
        {6, 6, 1, 6},
        {-3, 11, 2, 55},
        {0, 4, 0, 4}
    };

    for (int col = 0; col < SIZE; col++) {
        double result = sumColumn(matrix, rowSize, col);
        cout << "sum of column " << col << "=" << result << endl;
    }

    return 0;
}
