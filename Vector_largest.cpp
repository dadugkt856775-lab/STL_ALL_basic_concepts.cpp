#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 25, 5, 40, 15};

    int largest = v[0];

    for (int x : v) {
        if (x > largest)
            largest = x;
    }

    cout << "Largest = " << largest;

    return 0;
}
