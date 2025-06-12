#include <iostream>
using namespace std;
int main() {
    int n, sum=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (int i = 1; i<=n; i++) {
        cout<<i<<"*"<<i<<"="<<i*i<<endl;;
        sum+=i*i;

    }
    cout<<endl<<"Sum is "<<sum<<endl;
}