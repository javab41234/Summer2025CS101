#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int min = vec[0];
    int max = vec[0];
    double sum = vec[0];  

    for (int i = 1; i < n; i++) {
        if (vec[i] < min) min = vec[i];
        if (vec[i] > max) max = vec[i];
        sum += vec[i];
    }

    double average = sum / n;

    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
    cout << "Average: " << average << endl;

    return 0;
}