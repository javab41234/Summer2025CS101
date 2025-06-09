#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b && a>=c) {
        cout<<"A is the biggest number";

    }else if(b>=a && b>=c) {
        cout<<"B is the biggest number";

    }else if(c>=a && c>=b) {
        cout<<"C is the biggest number";
    };
    return 0;
}