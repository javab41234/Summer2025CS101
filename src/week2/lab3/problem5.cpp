#include <iostream>
using namespace std;
#include <cstdlib>
#include <time.h>
int main() {
    srand(time(NULL));
    int r=1+rand()%100;
    string guess;
    cin>>guess;
    if(r%2==0&&guess=="even"){
        cout<<"You won!";
    } else if(r%2==1&&guess=="odd") {
        cout<<"You won!";
    }else {
        cout<<"You lost! "<<r<<endl;
    }
}