#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    int num;
    cout << "Enter numbers (0 to stop): ";
    while (true) {
        cin >> num;
        if (num == 0) break;
        vec.push_back(num);
    }

    if (vec.empty()) {
        cout << "Vector is empty!" << endl;
        return 0;
    }
    cout << "Front element: " << vec.front() << endl;
    cout << "Back element: " << vec.back() << endl;

    for (auto it = vec.begin(); it != vec.end(); ) {
        if (*it < 10) {
            it = vec.erase(it);
        } else {
            ++it;
        }
    }
    if (vec.size() >= 1)
        vec.insert(vec.begin() + 1, 33);
    else
        vec.insert(vec.begin(), 33);

    if (vec.size() >= 2)
        vec.insert(vec.end() - 1, 55);
    else
        vec.push_back(55);
    cout << "Updated vector: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}