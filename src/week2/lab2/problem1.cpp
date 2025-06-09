#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    if (x>0) {
        cout <<"Positive\n";

    }else if (x<0) {
        cout <<"Negative\n";

    }else {
        cout <<"Neither positive nor negative\n";
    };
    return 0;
}