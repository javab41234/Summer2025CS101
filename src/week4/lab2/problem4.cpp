#include <iostream>
using namespace std;

bool is_mirrored(const int* a, const int* b, int size) {
    const int* endB = b + size - 1;
    for (int i = 0; i < size; i++) {
        if (*(a + i) != *(endB - i))
            return false;
    }
    return true;
}

int main() {
    int size;
    cin >> size;
    int a[size], b[size];

    for (int i = 0; i < size; i++) cin >> a[i];
    for (int i = 0; i < size; i++) cin >> b[i];

    cout << is_mirrored(a, b, size);
    return 0;
}