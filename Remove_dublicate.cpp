#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 10, 30, 20, 40};

    for (int x : s)
        cout << x << " ";

    return 0;
}
