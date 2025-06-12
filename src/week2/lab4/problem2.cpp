#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=10;i<n;i+=10) {
        if(i==n) {
            cout<<i;
        }
        cout<<i<<",";
    }
    return 0;
}