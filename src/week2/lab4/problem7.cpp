#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int max;
    cin>>max;
    int t;
    for (int i=2;i<=num;i++) {
        cin>>t;
        if (max<t) {
            max=t;
        }

    } cout<<"Max is "<<max<<endl;
}