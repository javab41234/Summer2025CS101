#include <iostream>
using namespace std;
int main() {
    char c;
    cin >> c;
    if (c >= 'A' && c <= 'Z') {
        cout<<"Upper case Alphabet"<<endl;

    }else if (c >= 'a' && c <= 'z') {
        cout<<"Lower case Alphabet"<<endl;

    }else {
        cout << "It is not an alphabet"<<endl;
    }
    return 0;
}