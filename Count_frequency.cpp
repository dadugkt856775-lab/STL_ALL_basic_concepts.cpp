#include <iostream>
#include <map>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 1, 2, 4};

    map<int, int> freq;

    for (int x : arr)
        freq[x]++;

    for (auto p : freq)
        cout << p.first << " -> " << p.second << endl;

    return 0;
}
