#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    int r;
    cout << "Enter an integer: ";
    cin >> num;
    while (num>0) {
        r=num%10;
        num=num/10;
        sum=sum+r;
    }
    cout << "The sum of digits is " << sum << endl;
    return 0;
}