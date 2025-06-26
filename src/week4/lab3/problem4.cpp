#include <iostream>
#include <iomanip> 
using namespace std;

bool isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int count = 0;
    int number = 1; 

    while (count < 50) {
        if (number % 2 == 0 && isPalindrome(number)) {
            cout << setw(6) << number;
            count++;
            if (count % 5 == 0)
                cout << endl;
        }
        number++;
    }

    return 0;
}