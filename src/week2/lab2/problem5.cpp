#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if (a+b>c&&a+c>b&&b+c>a) {
        cout<<"Scalene"<<endl;
    }else if (a==b&&a==c&&b==a) {
        cout<< "Equilateral"<<endl;
    }
    else if ((a==b)||(a==c)||(b==c)) {
        cout<<"Isosceles"<<endl;
    }
    return 0;
}