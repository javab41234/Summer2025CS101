#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    int a,b,c,d;
    a=num%10;
    num/=10;
    b=num%10;
    num/=10;
    c=num%10;
    num/=10;
    d=num%10;
    int odd=0;
    int even=0;

    if (a%2==0){
        even++;
    }else{
        odd ++;
    }

    if (b%2==0) {
        even++;
    }else{
        odd++;
    }

    if (c % 2 == 0){
        even++;
    }else {
        odd++;
    }

    if (d % 2 == 0){
        even++;
    }else {
        odd++;
    }

    if (even > odd) {
        cout << "More even digits" << endl;
    } else if (odd > even) {
        cout << "More odd digits" << endl;
    } else {
        cout << "Equal even and odd digits" << endl;
    }


    return 0;
}