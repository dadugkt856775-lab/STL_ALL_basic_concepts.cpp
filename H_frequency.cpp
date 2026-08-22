#include <iostream>
#include <map>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 2, 4, 3};

    map<int, int> freq;

    for (int x : arr)
        freq[x]++;

    int element = 0;
    int maximum = 0;

    for (auto x : freq) {
        if (x.second > maximum) {
            maximum = x.second;
            element = x.first;
        }
    }

    cout << "Element = " << element << endl;
    cout << "Frequency = " << maximum;

    return 0;
}
