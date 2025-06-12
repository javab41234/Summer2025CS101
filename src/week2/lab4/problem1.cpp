#include <iostream>
using namespace std;
int main() {
    int i=1;
    int sum=0;
    while(i<=10) {
        cout<<i<<" ";
        sum+=i;
        i++;
    }
    cout<<endl<<sum<<endl;
}