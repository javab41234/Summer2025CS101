#include <iostream>
using namespace std;

  int multiplication(int a, int b) {
      if (b == 0) {
          return 0;
      }
      if (b>0) {
          return a+multiplication(a,b-1);
      }
      else {
          return -a+multiplication(a,b+1);
      }
  }
      int main() {
          int a,b;
          cin>>a>>b;
          cout<<multiplication(a,b);
          return 0;
      }