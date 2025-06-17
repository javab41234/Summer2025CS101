#include <iostream>
using namespace std;
int print_numbers(int n){
    if(n==0) {
        return 0;
    }
    cout<<n<<endl;
    return print_numbers(n-1);
} int main() {
    cout<<print_numbers(10)<<endl;
}