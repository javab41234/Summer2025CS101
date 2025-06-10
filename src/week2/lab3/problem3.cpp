#include <iostream>
using namespace std;
int main() {
    int w;
    cin>>w;
    switch(w<=0) {
        case true:
            cout<<"Invalid input\n";
        break;
        case false:switch (w) {
            case 1:
            case 2:
                cout<<3500;
            break;

            case 3:
                cout<<5500;
            break;
            case 4:
                case 5:
            cout<<8500;
            break;
            case 6:
            case 7:
            case 8:
        cout<<10500;
            break;
            default:
                cout<<"The package cannot be shipped.";
        }
    }
}