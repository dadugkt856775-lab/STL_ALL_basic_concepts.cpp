#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string str = "programming";

    unordered_map<char, int> freq;

    for (char ch : str) {
        freq[ch]++;
    }

    for (auto x : freq) {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}
