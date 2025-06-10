#include <iostream>
using namespace std;
int main() {
    char light;
    cout<<"Enter a character: ";
    cin>>light;
    switch (light) {
        case 'g':
            cout <<"Go!";
        break;
        case 'y':
            cout <<"Get Ready!";
        break;
        case 'r':
            cout<<"Stop!";
        break;
        default:
            cout<<"No such light!";

    }

}