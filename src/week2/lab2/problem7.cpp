#include <iostream>
using namespace std;
int main() {
    int  num;
    cin>>num;
    int a=num/100;
    int b=num%10;
    if(a==b) {
        cout<<"Palindrome";
    }else {
        cout<<"Not a palindrome";
    }
    return 0;
}