#include <iostream>
using namespace std;

int main() {
    int num, m= 0;

    for (int i = 0; i < 5; i++) {
        cin >> num;
        if (num >= 0) {
            m = 1;
        }
    }

    cout << m << endl;
    return 0;
}