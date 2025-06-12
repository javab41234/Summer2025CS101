#include <iostream>
using namespace std;
int main(){
    int a;
    for(char i='A';i<='Z';i++) {
        cout<<i<<" ";
        if(i%5==4) {
            cout<<endl;
        }
    }
    return 0;
}