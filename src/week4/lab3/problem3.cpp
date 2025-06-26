#include <iostream>
using namespace std;

int yearToCentury(int year) {
    return (year - 1) / 100 + 1;
}

int main() {
    int year;
    cin >> year;

    cout << "Century: " << yearToCentury(year) << endl;

    return 0;
}