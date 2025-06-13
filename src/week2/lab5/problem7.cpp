#include <iostream>
using namespace std;
#include <ctime>

int main() {
    int evenCount = 0;
    int oddCount = 0;
    srand(time(0));

    for (int i = 0; i < 1000; i++){
        int number =rand();

        if (number % 2 == 0) {
            ++evenCount;
        } else {
            ++oddCount;
        }
    }

    cout<< "Even numbers: " << evenCount<<endl;

    cout << "Odd numbers: " << oddCount ;

    return 0;
}