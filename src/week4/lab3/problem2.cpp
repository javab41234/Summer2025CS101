#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    if (a == 0) {
        cout << "That depth is 0" << endl;
    } else {
        for (int i = 1; i <= a; i++) {
            for (int j = 0; j < i; j++) {
                cout << i;
            }
            cout << endl;
        }
    }

    return 0;
}