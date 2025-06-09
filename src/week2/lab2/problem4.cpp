#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a, b, c;
    cin >> a >> b >> c;
    float D=b*b-4*a*c;
    if (D<0) {
        cout<<"there is no solution";
    }else if (D==0) {
        float x=-b/(2*a);
        cout <<"x1=x2="<<x<<endl;
    }else if (D>0) {
        float x1,x2;
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        cout<<"x1="<<x1<<"\nx2="<<x2;
    }
    return 0;

}