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
    int odd=4;
    int even=0;
    if (a%2==0) {
        even++;
        odd--;
    }
    if (b%2==0) {
        even++;
        odd--;
    }

    return 0;
}
