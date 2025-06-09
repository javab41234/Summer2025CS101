#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    num=num--;
    num=num*7;
    num=num-14;
    num=num/12;
    num=num+3;
    int r=num%3;
    cout << r << endl;
    cout << num << endl;
    return 0;
}