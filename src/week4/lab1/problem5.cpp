

#include <iostream>
using namespace std;
int count(const string &str,char a) {
    int counter = 0;
    for(int i=0;i<str.size();i++) {
        if(str[i]==a) {
            counter++;
        }
    }
    return counter;
}
int main() {
    string s="Hello World";
    cout<<count(s,'a')<<endl;
}